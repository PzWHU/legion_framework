#!/usr/bin/env python3
"""
Post-process /tmp/vla_prompt_debug.txt so that each [Ground Truth] line
is moved right after its corresponding prompt block (matched by timestamp).

Usage:
    python3 merge_vla_debug_gt.py
    python3 merge_vla_debug_gt.py /path/to/vla_prompt_debug.txt
    python3 merge_vla_debug_gt.py input.txt output.txt
"""
import re
import sys
from pathlib import Path


def parse_blocks(lines):
    """Parse prompt blocks and ground-truth lines, return ordered blocks + gt dict."""
    prompt_re = re.compile(r"^===== Prompt at t=([0-9.]+) =====")
    gt_re = re.compile(r"^\[Ground Truth at t=([0-9.]+)\] \(([-+]?\d+),([-+]?\d+)\)")

    blocks = []          # list of (timestamp, list_of_lines)
    gt_map = {}          # timestamp -> "[Ground Truth at t=...] (d,s)"
    current_ts = None
    current_lines = []

    for line in lines:
        m = prompt_re.match(line)
        if m:
            if current_ts is not None:
                blocks.append((current_ts, current_lines))
            current_ts = m.group(1)
            current_lines = [line]
            continue

        if current_ts is not None:
            current_lines.append(line)

        m = gt_re.match(line)
        if m:
            ts = m.group(1)
            gt_map[ts] = line.rstrip("\n")

    if current_ts is not None:
        blocks.append((current_ts, current_lines))

    return blocks, gt_map


def merge(blocks, gt_map):
    """Yield lines with ground truth appended to the matching prompt block."""
    emitted_gt = set()
    for ts, lines in blocks:
        for line in lines:
            # Skip standalone ground-truth lines that will be re-emitted after block
            if line.startswith("[Ground Truth at t="):
                continue
            yield line.rstrip("\n")

        if ts in gt_map:
            yield gt_map[ts]
            emitted_gt.add(ts)

        # Preserve original blank line separator after each block
        yield ""

    # Any ground truth without a matching prompt block goes to the end
    leftover = []
    for ts, gt_line in gt_map.items():
        if ts not in emitted_gt:
            leftover.append((ts, gt_line))
    if leftover:
        yield ""
        yield "# Leftover Ground Truth (no matching prompt block):"
        for ts, gt_line in sorted(leftover, key=lambda x: float(x[0])):
            yield gt_line


def main():
    if len(sys.argv) >= 2:
        in_path = Path(sys.argv[1])
    else:
        in_path = Path("/tmp/vla_prompt_debug.txt")

    if len(sys.argv) >= 3:
        out_path = Path(sys.argv[2])
    else:
        out_path = in_path.with_suffix(".merged.txt")

    if not in_path.exists():
        print(f"Error: input file not found: {in_path}", file=sys.stderr)
        sys.exit(1)

    lines = in_path.read_text(encoding="utf-8").splitlines()
    blocks, gt_map = parse_blocks(lines)

    out_path.write_text("\n".join(merge(blocks, gt_map)) + "\n", encoding="utf-8")
    print(f"Merged {len(blocks)} prompt blocks with {len(gt_map)} ground-truth entries.")
    print(f"Output: {out_path}")


if __name__ == "__main__":
    main()

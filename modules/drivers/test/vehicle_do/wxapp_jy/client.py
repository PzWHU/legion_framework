import asyncio
import websockets


async def hello(uri):
	async with websockets.connect(uri) as ws:
		await ws.send("i am python ws client!")
		recv_text=await ws.recv()
		print(recv_text)



asyncio.get_event_loop().run_until_complete(
	hello('ws://172.22.105.28:8282'))
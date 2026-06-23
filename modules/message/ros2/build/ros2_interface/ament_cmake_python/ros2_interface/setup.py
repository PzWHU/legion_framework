from setuptools import find_packages
from setuptools import setup

setup(
    name='ros2_interface',
    version='1.0.0',
    packages=find_packages(
        include=('ros2_interface', 'ros2_interface.*')),
)

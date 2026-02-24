import pytest

from pyproj.pyproj import greet


def test_greet_default():
    assert greet() == "Hello, world!"


def test_greet_custom():
    assert greet("Poetry") == "Hello, Poetry!"

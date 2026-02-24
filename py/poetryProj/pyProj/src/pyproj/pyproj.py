"""A tiny utility that greets the world."""

from __future__ import annotations


def greet(name: str = "world") -> str:
    """Return a friendly greeting."""
    return f"Hello, {name}!"

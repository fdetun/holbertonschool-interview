#!/usr/bin/python3
from collections import deque
"""island perimetre script"""


def island_perimeter(grid):
    """
    island_perimeter func
    """
    s = 0
    for line in grid + list(map(deque, zip(*grid))):
        for l, k in zip([0] + line, line + [0]):
            if l != k:
                s += 1
    return s

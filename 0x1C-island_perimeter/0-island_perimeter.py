#!/usr/bin/python3
"""island perimetre script"""


def island_perimeter(grid):
    """
    island_perimeter func
    """
    s = 0
    p = list(map(list, zip(*grid)))
    for line in grid + p:
        l = [0] + line
        r = line + [0]
        for h, k in zip(l, r):
            if (h != k):
                s = s + 1
    return s

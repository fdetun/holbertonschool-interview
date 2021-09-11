#!/usr/bin/python3
"""
Given a pile of coins of different values,
determine the fewest number of coins needed to meet a given amount total.
"""


def makeChange(coins, total):
    """determine the fewest number of coins needed to meet a given amount total.
    """
    if total <= 0:
        return 0
    coins.sort()
    coins.reverse()
    pieces = 0
    for coin in coins:
        if total <= 0:
            break
        rest = total // coin
        pieces += total // coin
        total -= (total // coin) * coin
    if total != 0:
        return -1
    return pieces

#!/usr/bin/python3
"""
Given a pile of coins of different values, determine the fewest number of coins needed to meet a given amount total.
"""


def makeChange(coins, total):
    """return the fewest number of coins needed to meet a given amount
    """
    if total <= 0:
        return -1
    coins.sort()
    coins.reverse()
    counter = 0
    for piece in coins:
        if total <= 0:
            break
        buff = total // piece
        counter += total // piece
        total -= (total // piece) * piece
    if total != 0:
        return -1
    return counter

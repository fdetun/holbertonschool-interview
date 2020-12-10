#!/usr/bin/python3
"""0-lockboxes"""

def canUnlockAll(boxes):
    """ i can do all """
    if len(boxes) == 0:
        return False
    if type(boxes) is not list:
        return False
    else:
        lenbox = len(boxes)
    arr=[0]
    for i in arr:
        if i == 0 or i in arr :
            for j in boxes[i]:
                if type(j) is int:
                    if j <= lenbox and j not in arr and j != 0 :
                        arr.append(j)
    if len(arr) == lenbox:
        return True
    else:
        return False
#!/usr/bin/python3
"""
rotate_2d_matrix
"""
from copy import deepcopy


def rotate_2d_matrix(matrix):
    arr = deepcopy(matrix)
    l = len(matrix)
    for i in range(l):
        for j in range(l):
            matrix[i][j] = arr[l - j - 1][i]

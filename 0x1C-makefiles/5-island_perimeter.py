#!/usr/bin/python3
"""Defines a function that returns the perimeter of
the island described in grid"""


def island_perimeter(grid):
    """returns the perimeter of an island defined in grid.
    grid is a list of list of integers"""
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    perimeter = size * 4 - edges * 2
    return perimeter

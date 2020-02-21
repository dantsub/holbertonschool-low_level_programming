#!/usr/bin/python3
"""
Island Perimeter module
"""


def island_perimeter(grid):
    """
    Function for mesure perimeter
    """
    if len(grid) > 0:
        sume = 0
        limit = 0
        lg = len(grid)
        lc = len(grid[0])
        for c in range(lg):
            sume += sum(grid[c])
            for r in range(lc):
                if grid[c][r]:
                    if (r > 0 and grid[c][r - 1] == 1):
                        limit += 1
                    if (c > 0 and grid[c - 1][r] == 1):
                        limit += 1
        return sume * 4 - limit * 2

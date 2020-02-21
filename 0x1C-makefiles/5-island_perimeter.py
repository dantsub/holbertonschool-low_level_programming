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
        for cl in grid:
            idx = 0
            sume += sum(cl)
            for rw in cl:
                if (idx > 0 and (cl[idx - 1] and rw)):
                    limit += 1
                idx += 1
        return sume * 4 - limit * 4

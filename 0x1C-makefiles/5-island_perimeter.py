#!/usr/bin/python3
"""
    function that returns the perimeter of the island"
"""


def island_perimeter(grid):
    """
        function that returns the perimeter of the island

        Args:
            grid: The island
        Return:
            the perimeter of the island
    """
    perimeter = 0
    row = len(grid)
    col = len(grid[0])

    if grid is None:
        return 0

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter

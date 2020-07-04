#!/usr/bin/python3
"""
tecnical enterview preparation
"""


def island_perimeter(grid):
    """
        function that returns perimeter of an island
    """

    p = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):

            if (grid[i][j]) == 1:

                if (p == 0):
                    p = p + 3
                else:
                    p += 2
            if (grid[i][j]) == 1:        
                if ((grid[i][j - 1]) == 1 and (grid[i - 1][j]) == 1) and grid[i - 1][j - 1] == 1:
                
                    p -= 2
    p += 1
    return (p)

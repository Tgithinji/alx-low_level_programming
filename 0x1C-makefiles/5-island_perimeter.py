#!/usr/bin/python3
"""
5-island_perimeter module
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    num_rows = len(grid)
    num_columns = len(grid[0])
    height = 0
    width = 0

    for row in range(num_rows):
        for col in range(num_columns):
            # check if cell is 1 for land
            if grid[row][col] == 1:
                height += 1
                width += 1

                # check if left side is 1/land and not in the edge
                # if so subtract 1 from height to avoid double countin
                # do the same for the top side
                if grid[row - 1][col] == 1 and row > 0:
                    width -= 1
                if grid[row][col - 1] == 1 and col > 0:
                    height -= 1

    perimeter = 2 * (height + width)
    return perimeter

#!/usr/bin/python3
""" A module to calculate the perimeter of the island described in grid"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A list of lists of integers,
        where 0 represents water and 1 represents land.

    Returns:
        int: The perimeter of the island.

    Example:
        grid = [
            [0, 1, 0, 0],
            [1, 1, 1, 0],
            [0, 1, 0, 0],
            [1, 1, 0, 0]
        ]
        island_perimeter(grid)  # Output: 16
    """
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # Check left
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                # Check right
                if col == cols - 1 or grid[row][col + 1] == 0:
                    perimeter += 1
                # Check top
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                # Check bottom
                if row == rows - 1 or grid[row + 1][col] == 0:
                    perimeter += 1

    return perimeter

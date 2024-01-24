#!/usr/bin/python3
"""
    This script returns perimeter of grid with :
        grid is a list of list of integers:
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100
            Grid is completely surrounded by water, and there is one island
            (or nothing).
            The island doesn’t have “lakes” (water inside that isn’t connected
            to the water around the island).
"""


def island_perimeter(grid):
    perimeter_grid = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i][j-1] == 0:
                    perimeter_grid += 1
                if grid[i][j+1] == 0:
                    perimeter_grid += 1
                if grid[i-1][j] == 0:
                    perimeter_grid += 1
                if grid[i+1][j] == 0:
                    perimeter_grid = perimeter_grid + 1
    return perimeter_grid

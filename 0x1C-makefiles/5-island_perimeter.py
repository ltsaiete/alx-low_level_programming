#!/usr/bin/python3
"""
This is a simple module and it only has
one function called island_perimeter(grid)
"""


def island_perimeter(grid):
    """
    This function  returns the perimeter of the island described in grid

    Args:
        grid(list): the grid

    Returns:
        perimeter of the grid
    """
    island_ranges = {}
    count = 0

    for lst in grid:
        for i in range(len(lst)):
            if (lst[i] == 1):
                if (count not in island_ranges):
                    island_ranges[count] = [i, i]
                elif (island_ranges[count][1] < i):
                    island_ranges[count][1] = i

        count = count + 1

    island_cells = []

    for v in island_ranges.values():
        island_cells.append(v[1] - v[0] + 1)

    perimeter = 0

    for i in range(len(island_cells)):
        # Add the left edge to perimeter
        perimeter = perimeter + 1
        if (i == 0):
            perimeter = perimeter + island_cells[i]

        elif i == len(island_cells) - 1:
            perimeter = perimeter + island_cells[i]

        if i != 0 and island_cells[i] != island_cells[i-1]:
            perimeter = perimeter + abs(island_cells[i] - island_cells[i-1])

        # Add the right edge to perimeter
        perimeter = perimeter + 1

    return perimeter

#!/usr/bin/python3
"""Module for the island_perimeter method"""


def island_perimeter(grid):
    """function to calculate island perimeter"""
    m,n=len(grid), len(grid[0])
    land, nei=0,0
    for i in range(m):
        for j in range(n):
            if grid[i][j]==1:
                land+=1
                if i < m-1 and grid[i+1][j]==1:
                    nei+=1
                if j < n-1 and grid[i][j+1]==1:
                    nei+=1
    return land*4-2*nei

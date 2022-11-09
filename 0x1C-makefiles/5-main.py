#!/usr/bin/python3
"""
Find perimeter of 1's (4 sides of 3 in this instance of grid)
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    grid2 = []
    grid3 = [[0]]
    grid4 = [
        [0, 0, 0],
        [0, 1, 0],
        [0, 0, 0]
    ]
    grid5 = [
        [1, 0, 0, 0, 0, 0],
        [1, 1, 0, 0, 0, 0],
        [1, 1, 0, 0, 0, 0],
        [1, 1, 1, 1, 0, 0],
        [1, 1, 1, 1, 1, 1]
    ]
    grid6 = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 1, 1, 1, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    grid7 = [
        [1, 1, 1, 1, 1],
        [1, 1, 1, 1, 1],
        [1, 1, 1, 1, 1]
    ]
    grid8 = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 1, 0, 0, 0],
        [1, 1, 1, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 1, 1, 1]
    ]
    grid9 = [
        [0, 1, 0, 0, 0, 1],
        [1, 1, 0, 0, 0, 1],
        [1, 1, 0, 1, 1, 1],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 1, 1, 0, 0]
    ]
    print(island_perimeter(grid))  
    print(island_perimeter(grid2)) 
    print(island_perimeter(grid3))  
    print(island_perimeter(grid4))  
    print(island_perimeter(grid5))  
    print(island_perimeter(grid6))  
    print(island_perimeter(grid7))  
    print(island_perimeter(grid8))  
    print(island_perimeter(grid9))  

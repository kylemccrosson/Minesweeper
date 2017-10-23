# Minesweeper

A Minesweeper game written in C++ written with Max Rona
To run, must have a C++ compiler and the SDL2 graphics library installed

The program opens a game of minesweeper. The object is open (by left-clicking) all tiles except for those that are concealing a mine, and to flag every tile (by right-clicking) that has a mine underneath it.
When a tile is clicked that does not contain a mine, it will reveal a number denoting the amount of mines that are adjacent to it (1-8), an empty tile indicates that there are no adjacent mines.

The game may be resized or restarted at any time by pressing 1, 2, or 3 on your keyboard to create a new Easy, Medium, or Hard game, respectively.

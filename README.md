# AzureJamGame

# Title TBD

This game is being made for the Azure Lux Game Jam, with the theme of "Chain reaction"

## The tech stack

This is a game made with Unreal Engine 4.27 source build, and is using Playfab services, including in which is user management and server access. 

## The game

This is a puzzle game, where the player or players (up to 2) will be interacting with the nodes on a grid, trying to make a path for a ball of energy to reach the end node, resulting in a chain reaction, which will power the azure server rack.

### The puzzle

It will be a grid of 10 by 6 nodes, each of which will have 4 access points, and up to 2 control points, interacting with which will rotate the symbols of that access level around.
To test the puzzle grid, there will be a button/lever for the players to interact with, on which the grid and the button/lever will be locked. If the orb reaches a node point it can't go past from, it will dissipate, on which the grid and the button/lever will get unlocked.

### In single player

The player will be solving the puzzle alone.

### In co-op mode

The grid will split the nodes randomly in half, and give each player access to one of the halves. 

### The energy orb

The orb will have a start node, and on reaching a node it will try to calculate which node to go to next. If it cannot calculate the next node, or gets to a node point it has already visited, it will dissipate.


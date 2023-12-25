# Snake Game
The classic snake game made in flowgorithm. Eat apples to get longer (max size = 6), dont hit the border or yourself

- Leo - Project lead / Rendering
- Valentino - Entities 
- Leon - Controls / Leaderboard

## Controls < Leon
continously accept user input and provides the direction for the snake to go in
 - [ ] function that returns int array with vectors for movement | ex. direction(0,-1) for going down
## Snake Move 
process the control input into change of cordinates for snake
 - [ ]
## Entities < Valentino
spawn apples at random cordinates and gamesteps.
 - [x] function that returns int array with cordinates for apple
 - [x] generate apples on every 8th step
 - [x] check if snake cordinates == apples cordinates
 - [x] keep track of score
## Check Conditions
checks if the player has taken an apple or lost the game 
 - [ ]
## Rendering
a set of functions that print out the full game board. The board is stored as a string array acting as a 2d array
 - [x] line by line rendering
 - [x] board aspect ratio 12/24
 - [x] snake rendering
 - [x] paramterized
 - [x] more utility functions
 - [x] borders and UI
 - [x] timestep + movement
 - [ ] optimisation ?
## Game stack
this is the sequence of events that happen inside the main game loop
 - [ ] Control Input
 - [ ] Snake Move
 - [ ] Spawn Apple
 - [ ] check conditions
 - [x] render
 - [x] timestep

# Snake Game
The classic snake game made in flowgorithm. Eat apples to get longer (max size = 6), dont hit the border or yourself

- Leo - Project lead / Rendering
- Valentino - Entities 
- Leon - Controls / Leaderboard

## Rendering
the graphics engine which renders out a user interface for the game
 - [x] line by line rendering
 - [x] standardized variables
 - [ ] board aspect ratio
 - [ ] snake rendering
 - [ ] optimisation ?
## Entities
spawn apples at random cordinates and gamesteps.
 - [ ] function that returns int array with cordinates for apple
 - [ ] accepting arguments gameStep and boardSize
## Controls
continously accept user input and provides the direction for the snake to go in
 - [ ] function that returns int array with vectors for movement | ex. direction(0,-1) for going down
## Game logic / ruleset
 determines the winning / losing conditions and keeps track of score
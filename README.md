# Snake Game
The classic snake game made in flowgorithm. Eat apples to get longer (max size = 6), dont hit the border or yourself

- Leo - Project lead / Rendering
- Valentino - Entities 
- Leon - Controls / Leaderboard

## Rendering
the graphics engine which renders out a user interface for the game
 - [x] line by line rendering
 - [x] standardized variables
 - [x] board aspect ratio 12/24
 - [ ] borders and UI
 - [ ] snake rendering
 - [ ] optimisation ?
## Entities
spawn apples at random cordinates and gamesteps.
 - [x] function that returns int array with cordinates for apple
 - [ ] generate apples on every 8th step
 - [x] check if snake cordinates == apples cordinates
 - [x] keep track of score
## Controls
continously accept user input and provides the direction for the snake to go in
 - [ ] function that returns int array with vectors for movement | ex. direction(0,-1) for going down
## Game stack
 - [ ] Control Input
 - [ ] Snake Move
 - [ ] Entities
 - [ ] timestep ?
 - [ ] Render

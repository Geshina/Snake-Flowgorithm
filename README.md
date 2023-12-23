# Snake Game
The classic snake game made in flowgorithm. Eat apples to get longer (max size = 6), dont hit the border or yourself

- Leo - Project lead / Rendering
- Valentino - Entities 
- Leon - Controls / Leaderboard

## Rendering
a set of functions that print out the full game board. The board is stored as a one-dimensional array
 - [ ] line by line rendering
 - [ ] board aspect ratio 12/24
 - [ ] snake rendering <<
 - [ ] optimisation ?
 - [ ] borders and UI
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
 - [ ] Spawn Apple
 - [ ] timestep ?
 - [ ] game engine (render & logic)

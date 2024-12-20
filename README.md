# Tetris

A classic Tetris game implemented in C++ using the [raylib](https://www.raylib.com/) library for graphics and audio. This project delivers an immersive gaming experience with clean visuals, a scoring system, and engaging sound effects.

## Features

- **Real-time gameplay** with smooth animations.
- **Scoring system**:
  - Points awarded for lines cleared and block movements.
  - Displays the current score and next block.
- **Random block generation** with all standard Tetris shapes.
- **Audio effects**:
  - Background music.
  - Sound effects for block rotation and row clearing.
- **Game Over logic**: Ends the game when no valid moves remain.
- **Polished UI**: Modern visuals using custom fonts and colors.

## Prerequisites

- A C++ compiler (e.g., Visual Studio, GCC).
- [raylib](https://www.raylib.com/) library installed.
- Familiarity with building C++ projects using `cmake` or an IDE.



## How to Build

1. Install the [raylib](https://www.raylib.com/) library on your system.
2. Open the `tetris.sln` file in Visual Studio (or your preferred IDE), or use `cmake` to configure and build the project.
3. Compile the project and run the executable.

## Gameplay Instructions

- **Controls**:
  - **Left Arrow**: Move block left.
  - **Right Arrow**: Move block right.
  - **Down Arrow**: Move block down faster.
  - **Up Arrow**: Rotate block.
- **Objective**: Arrange falling blocks to complete horizontal rows. Cleared rows earn points.
- The game ends when blocks fill the grid to the top.

## Code Overview

### Main Gameplay Loop (`main.cpp`)

Handles window initialization, rendering, and event updates.
```cpp
while (WindowShouldClose() == false) {
    UpdateMusicStream(game.music);
    game.HandleInput();
    if (EventTriggered(0.2)) {
        game.MoveBlockDown();
    }
    BeginDrawing();
    ClearBackground(darkBlue);
    game.Draw();
    EndDrawing();
}
```
### Block Logic (`Block.cpp`)

Defines block behavior, including movement, rotation, and rendering.

```cpp
void Block::Move(int rows, int columns) {
    rowOffset += rows;
    columnOffset += columns;
}
```
### Grid Management (`grid.cpp`)

Manages the game grid, checks row completion, and updates the state.

```cpp
bool Grid::IsRowFull(int row) {     
    for (int column = 0; column < numColumns; column++) {         
        if (grid[row][column] == 0) {             
            return false;         
        }     
    }     
    return true; 
}
```
## Credits

- **Developer**: Nilay Mehta
- **Library**: [raylib](https://www.raylib.com/)

---

Enjoy building and playing this version of Tetris!

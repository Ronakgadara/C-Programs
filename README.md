# Tic-Tac-Toe Game (C)

A simple console-based Tic-Tac-Toe game developed in C. This program allows two players to play the classic Tic-Tac-Toe game by taking turns entering their moves through the terminal.

## Features

- Two-player gameplay (Player X and Player O)
- 3×3 game board
- Input validation for invalid or occupied positions
- Automatic win detection
- Draw detection when the board is full
- Simple command-line interface

## Technologies Used

- C Programming Language
- Standard C Library (`stdio.h`)

## How It Works

1. The game starts with an empty 3×3 board.
2. Player **X** makes the first move.
3. Players enter the row and column numbers (0–2) for their move.
4. The program checks if the move is valid.
5. After each move, the game checks:
   - Rows
   - Columns
   - Diagonals
6. If a player gets three marks in a row, they win.
7. If all nine cells are filled without a winner, the game ends in a draw.

## Compilation

Using GCC:

```bash
gcc Tic-Tac-Toe.cpp -o tictactoe
```

> **Note:** Although the file extension is `.cpp`, the code uses C syntax and can be compiled as C. You may also rename it to `Tic-Tac-Toe.c`.

## Run

```bash
./tictactoe
```

On Windows:

```bash
tictactoe.exe
```

## Example

```
Welcome to Tic-Tac-Toe!

  |   |
---------
  |   |
---------
  |   |

Player X, enter row (0-2) and col (0-2):
```

## Project Structure

```
.
├── Tic-Tac-Toe.cpp
└── README.md
```

## Future Improvements

- Single-player mode with AI
- Better board formatting
- Score tracking
- Replay option
- Colored console output
- Player names instead of X/O

## Author

Developed as a simple console-based Tic-Tac-Toe game for learning C programming concepts including arrays, loops, conditional statements, and user input handling.
# Casino Game in C

A simple command-line casino game written in C where users can bet money on guessing a number that the computer randomly generates. The game allows players to deposit an initial amount, place bets, and guess numbers for a chance to multiply their stake.

## Installation

To run this game, you will need a C compiler like GCC installed on your system. Follow these steps to compile and run the game:

1. Download or clone the repository to your local machine.
2. Open your terminal and navigate to the project directory.
3. Compile the game using the C compiler:

    ```bash
    gcc -o casino casino.c
    ```

4. Run the game:

    ```bash
    ./casino
    ```

## How to Play

1. **Start the game**: Run the compiled executable from the terminal.
2. **Enter your name** and the **amount of money** you want to deposit.
3. **Place your bet**: Enter the amount of money you wish to bet.
4. **Guess a number** between 1 and 10.
5. If your guess is correct, you win 10 times the money you bet. If not, you lose your bet amount.
6. After each round, decide whether you want to **continue** playing or **quit** the game.

## Features

- User can deposit money to bet.
- Random number generation for game logic.
- Betting system allowing users to win or lose money based on their guess.
- Option for users to continue playing or quit after each round.
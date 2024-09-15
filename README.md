# Car Racing Game

A C++ car racing game built using the **SFML** library, featuring real-time collision detection between player cars, computer cars, animals, and environmental obstacles like potholes. The game adjusts player score and lives based on interactions with these objects.

## Features

- **Real-time collision detection**: Handles player and object collisions using rectangle and circle boundary checks.
- **Dynamic environment**: Obstacles such as animals and potholes impact player score and lives.
- **Score and life tracking**: The game maintains player stats, resetting upon collision events.
- **Comprehensive testing**: Unit tests validate collision detection and ensure smooth game functionality.

## Getting Started

### Prerequisites
- **SFML** (Simple and Fast Multimedia Library) installed on your system. You can download it [here](https://www.sfml-dev.org/download.php).

### Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/car-racing-game.git
    ```
2. Navigate to the project directory:
    ```bash
    cd car-racing-game
    ```
3. Build the project (assuming a `Makefile` is provided):
    ```bash
    make
    ```

### Running the Game

To start the game:
```bash
./car-racing-game

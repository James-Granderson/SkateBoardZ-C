# SkateBoardZ

**SkateBoardZ** is a lightweight skateboard game written in C.

The project is built around a simple idea: take a skateboarder, put them in a playable environment, and turn movement, tricks, momentum, and timing into the core of the game.

Rather than trying to build a massive game engine, SkateBoardZ focuses on understanding and implementing the fundamental pieces of a game from the ground up.

## Overview

SkateBoardZ is a side-scrolling skateboard game in which the player controls a skateboarder moving through an environment from left to right.

The player can move through the level, perform skateboard tricks, and interact with the movement and timing systems that make up the game.

The project is primarily an exploration of:

* Game loops
* Player movement
* Physics and momentum
* Input handling
* Trick mechanics
* Timing
* Collision and environment interaction
* Game state
* Rendering
* Audio
* Level structure

The goal is not simply to make something that displays a skateboarder on a screen. The goal is to understand how the individual systems of a game fit together to produce an interactive world.

---

# Game Concept

The basic game takes place in a horizontally oriented environment.

The skateboarder begins on the left side of the level and progresses toward the right. Along the way, the player can interact with the environment and perform tricks.

Movement and tricks are connected to timing. A successful trick is therefore more than simply pressing a button: the player must understand the relationship between movement, input, and the current state of the skateboarder.

The game is intentionally small in scope so that its systems can be understood and developed individually.

---

# Core Gameplay

The central gameplay loop is:

1. Start the game.
2. Control the skateboarder.
3. Move through the environment.
4. Encounter opportunities to perform tricks.
5. Execute tricks through player input and timing.
6. Continue through the level.
7. Track the player's progress and performance.

As the project develops, this basic loop can support additional mechanics such as more tricks, obstacles, scoring, level progression, and increasingly complex environments.

---

# Player

The player controls a skateboarder moving through the game world.

The skateboarder's state can potentially include information such as:

* Position
* Velocity
* Direction
* Movement state
* Jumping state
* Trick state
* Grounded state
* Current animation
* Current score or trick result

The player system is responsible for translating input into changes in the skateboarder's state.

---

# Movement

Movement is one of the fundamental systems of SkateBoardZ.

The skateboarder should be able to travel through the environment while maintaining a meaningful relationship between input, velocity, and position.

Potential movement mechanics include:

* Forward movement
* Stopping
* Acceleration
* Deceleration
* Jumping
* Air movement
* Momentum

The exact implementation of these mechanics will depend on the game's evolving design.

---

# Tricks

Tricks are one of the defining mechanics of SkateBoardZ.

A trick represents a temporary action performed by the skateboarder rather than ordinary movement.

The game can use combinations of:

* Player input
* Timing
* Movement state
* Airborne state
* Direction
* Trick duration

to determine whether a trick is successfully performed.

The trick system should ultimately make it possible to add new tricks without having to rebuild the entire game.

---

# Controls

Controls will be documented here as the input system is finalized.

| Input   | Action                            |
| ------- | --------------------------------- |
| `Left`  | Move / influence movement         |
| `Right` | Move / influence movement         |
| `Up`    | Jump / vertical movement          |
| `Down`  | Stop / crouch / additional action |
| `...`   | Trick or game action              |

The final control scheme will be based on the actual implementation.

---

# Game World

The game world is organized horizontally, with the player progressing from left to right.

The environment can contain different types of objects and terrain, including:

* Ground
* Ramps
* Obstacles
* Gaps
* Platforms
* Rails
* Other skateable objects

These elements can eventually interact with the player's movement and trick systems.

---

# Game Loop

Like most interactive games, SkateBoardZ operates around a repeating game loop.

Conceptually, each iteration of the loop performs three major tasks:

```text
Input
  ↓
Game State
  ↓
Rendering
  ↓
Input
  ↓
...
```

The game reads player input, updates the state of the game, and then renders the resulting state to the screen.

The loop repeats while the game is running.

---

# Architecture

SkateBoardZ is being developed in C with the intention of keeping the game's major systems understandable and separable.

The project may be divided into systems responsible for areas such as:

```text
SkateBoardZ
│
├── Game
│   └── Main game loop
│
├── Player
│   ├── Movement
│   ├── State
│   └── Tricks
│
├── World
│   ├── Level
│   ├── Terrain
│   └── Objects
│
├── Input
│
├── Rendering
│
└── Audio
```

The exact project structure should reflect the actual implementation rather than forcing the code into an arbitrary architecture.

---

# Technical Goals

SkateBoardZ is also a programming project.

The game provides a practical environment for exploring fundamental programming concepts in C, including:

* Structs
* Functions
* Pointers
* Arrays
* Enums
* State management
* Memory management
* File organization
* Header/source separation
* Game loops
* Event handling
* Mathematical modeling
* Collision detection

The project is intended to make these concepts concrete by putting them into a working interactive system.

---

# Development Philosophy

SkateBoardZ is intentionally developed incrementally.

A mechanic should first exist in its simplest useful form before additional complexity is introduced.

For example:

```text
Movement
   ↓
Jumping
   ↓
Tricks
   ↓
Scoring
   ↓
Complex environments
```

Each system should be understandable on its own before becoming dependent on increasingly complicated systems.

This makes the project useful both as a game and as a programming exercise.

---

# Current Development Status

**Status:** In Development

The project is being developed incrementally, with gameplay mechanics and architecture evolving alongside the codebase.

Current areas of development will be documented here as they are implemented.

### Implemented

* Project foundation
* Basic player concept
* Side-scrolling gameplay concept
* Skateboard trick concept

### In Development

* Player movement
* Game-state systems
* Trick mechanics
* Environment interaction

### Planned

* Additional tricks
* Obstacles
* Level progression
* Scoring
* Audio
* More complex environments
* Additional gameplay systems

This section should be updated as features become genuinely implemented rather than merely planned.

---

# Building

Build instructions will be documented once the project's compiler, libraries, and build process are finalized.

The intended build process will be kept as simple as possible so that the game can be compiled and run without unnecessary tooling.

Example:

```bash
# Build
...

# Run
...
```

---

# Project Structure

The final project structure will be documented here.

A typical structure may look like:

```text
SkateBoardZ/
│
├── src/
├── include/
├── assets/
├── levels/
├── audio/
├── README.md
└── ...
```

The actual structure should follow the project as it develops.

---

# Roadmap

### Foundation

* [ ] Establish game window
* [ ] Establish main loop
* [ ] Establish input handling
* [ ] Establish player
* [ ] Establish basic movement

### Gameplay

* [ ] Implement jumping
* [ ] Implement trick system
* [ ] Implement environment interaction
* [ ] Implement collision
* [ ] Implement scoring

### World

* [ ] Build first playable level
* [ ] Add obstacles
* [ ] Add ramps
* [ ] Add additional environmental objects
* [ ] Add level progression

### Presentation

* [ ] Player animation
* [ ] Environment art
* [ ] Sound effects
* [ ] Music
* [ ] UI

### Expansion

* [ ] Additional levels
* [ ] Additional tricks
* [ ] More complex environments
* [ ] Additional gameplay systems

---

# Design Principles

SkateBoardZ follows a few basic principles during development.

### Keep the Game Playable

New systems should contribute toward an increasingly playable game rather than creating complexity for its own sake.

### Understand the Mechanism

A system should be understandable before it is abstracted.

### Build From Concrete Systems

Movement should work before sophisticated physics are introduced. Tricks should work before a generalized trick framework is created. A level should work before a generalized level system is necessary.

### Let the Game Drive the Architecture

The architecture should emerge from the requirements of the game.

Rather than designing an elaborate system in advance, the project should reveal what abstractions are actually useful as development progresses.

---

# Project Goals

The long-term goal of SkateBoardZ is to produce a small but complete skateboard game while gaining practical experience building a game in C.

The project sits at the intersection of programming and game design.

It is an opportunity to answer questions that are difficult to understand purely theoretically:

**How does a game actually represent a player?**

**How does input become movement?**

**How does movement become physics?**

**How does a temporary action such as a trick exist inside a continuously running game?**

**How do objects interact with one another?**

**How does a collection of simple systems become a game?**

SkateBoardZ is the process of answering those questions in code.

---

# License

License information will be added when the project license is selected.

---

# Author

**Tim "James" Granderson**

GitHub: [James-Granderson](https://github.com/James-Granderson)

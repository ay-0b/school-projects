# Penalty Shootout Game

A console-based penalty shootout simulator written in C++. Take 5 shots, choose your direction, power, and placement, and try to beat the goalkeeper — score at least 3 out of 5 to win.

## How it works

- Each shot you pick a **direction** (left, middle, right), **power** (low/medium/high), and **placement** (regular or corners).
- The goalkeeper's dive is weighted toward whichever direction you've favored most so far, mixed with some randomness.
- Higher power lowers the goalkeeper's save probability but slightly raises the chance you hit the post.
- After 5 shots, you win if you've scored at least 3 goals.

## Build & run

```bash
g++ -std=c++17 -o penalty main.cpp
./penalty
```

## Concepts used

Basic I/O, input validation loops, arrays, and probability-driven game logic in C++.

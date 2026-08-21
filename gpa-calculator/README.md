# GPA Calculator

A console-based student transcript reporter written in C++. Enter a student's name and courses (name, credit hours, letter grade, grade points), and it prints a formatted transcript with per-course totals, semester GPA, and academic standing.

## How it works

- Prompts for the student's name and number of courses.
- For each course, collects the course name, credit hours, letter grade, and grade points.
- Computes each course's total quality points (credits × grade points).
- Prints a formatted transcript table, then the semester GPA and standing:
  - GPA ≥ 3.7 → Dean's List
  - GPA ≥ 2.0 → Good Standing
  - Below 2.0 → Probation

## Design

- `Course` stores a single course's name, credit hours, letter grade, and grade points, and computes its own total quality points.
- `Student` holds a name and a list of `Course` objects, computes GPA across all of them, and prints the formatted transcript.

## Build & run

```bash
g++ -std=c++17 -o gpa-calculator main.cpp
./gpa-calculator
```

## Concepts used

Classes and composition (`Student` holds a `vector<Course>`), formatted I/O with `iomanip`, and GPA calculation logic in C++.

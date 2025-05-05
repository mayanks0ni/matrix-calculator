
# Matrix Calculator and Performance Comparison in C & Python

## Overview
This project implements and benchmarks various matrix operations (multiplication, addition, subtraction, determinant, cofactor, minor, transpose, etc.) in both C and Python. The goal is to analyze performance differences between the two languages using large matrices.

## Structure
```
/major_project
├── main.c                  # Central file for C program execution
├── *.c, *.h                # Matrix operations implemented in C
├── multMatrix.py          # Python script for matrix multiplication
├── timeTakenC.txt         # Execution time logs for C
├── timeTakenPy.txt        # Execution time logs for Python
├── report.pdf             # Detailed report on design and results
└── readme.pdf             # Project instructions and overview
```

## How to Run

### C Program
```bash
gcc main.c -o matrix_c
./matrix_c
```

### Python Script
```bash
python3 multMatrix.py
```

## Dependencies

- C Compiler (e.g., GCC)
- Python 3.x
- NumPy library (`pip install numpy`)

## Author
- Mayank Soni

# Incorrect use of free() in C

This repository demonstrates a common error in C programming: incorrectly using the `free()` function.  The `free()` function is used to release dynamically allocated memory obtained using functions like `malloc()`, `calloc()`, or `realloc()`.  Attempting to use `free()` on memory not allocated with these functions leads to undefined behavior and potential program crashes or corruption.

The `bug.c` file shows the incorrect usage. The `bugSolution.c` shows the correct way to manage memory.
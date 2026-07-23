# Question 2

## Objective
Create a C program that:
- Creates a child process using `fork()`.
- Monitors the child process.
- Prevents zombie processes using `wait()`.
- Terminates an unresponsive child using `SIGTERM`.

## Commands Used

```bash
gcc process_manager.c -o process_manager
./process_manager
./process_manager > output.txt
```

## Explanation

- `fork()` creates a child process.
- `wait()` waits for the child process to finish, preventing zombie processes.
- `kill(pid, SIGTERM)` terminates an unresponsive child process.
- Output is saved in `output.txt`.

## Files

- process_manager.c
- process_manager
- output.txt

## Result

The program successfully created a child process, monitored it, terminated it using a signal, and prevented zombie processes using `wait()`.

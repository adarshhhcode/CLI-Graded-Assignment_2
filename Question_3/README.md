# Question 3

## Objective
Create a C program using Linux system calls to:
- Create a file.
- Write employee records.
- Update a specific record using `lseek()`.
- Read employee records.

## Commands Used

```bash
gcc employee_records.c -o employee_records
./employee_records
./employee_records > output.txt
```

## System Calls Used

- `open()` – Creates and opens the file.
- `write()` – Writes employee records.
- `lseek()` – Moves the file pointer to update a specific record.
- `read()` – Reads employee records.
- `close()` – Closes the file.

## Files

- employee_records.c
- employee_records
- employees.dat
- output.txt

## Result

The program successfully created a file, stored employee records, updated one record without rewriting the whole file, and displayed all records.

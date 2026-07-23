# Question 1

## Objective
Create a shell script to:
- Identify duplicate submissions.
- Back up unique submissions.
- Generate a processing report.
- Store errors separately.

## Commands Used

### mkdir
Created folders for submissions, backup, and screenshots.

### echo
Created sample student submission files.

### nano
Used to create and edit the shell script.

### chmod +x
Made the shell script executable.

### ./backup_script.sh
Executed the shell script.

### ls
Verified files and folders.

### cat
Displayed the contents of files.

## Redirection Operators Used

- `>` : Created or overwrote a file.
- `>>` : Appended data to a file.
- `2>>` : Appended error messages to `error.log`.

## Files Created

- backup_script.sh
- processing_report.txt
- error.log
- submissions/
- backup/

## Result

The shell script successfully:
- Detected duplicate files.
- Backed up unique files.
- Generated the processing report.
- Stored errors in a separate log file.

# Question 4

## Objective
Create a Linux command pipeline to:
- Display new log entries in real time.
- Extract ERROR messages.
- Save ERROR messages into a separate report.
- Suppress unnecessary output.

## Commands Used

```bash
cat server.log
grep "ERROR" server.log > error_report.txt
tail -f server.log
echo "ERROR CPU Overloaded" >> server.log
grep "ERROR" server.log > error_report.txt 2>/dev/null
```

## Linux Commands

- `tail -f` displays newly added log entries in real time.
- `grep` extracts ERROR messages.
- `>` stores output in a file.
- `2>/dev/null` suppresses error messages.

## Files

- server.log
- error_report.txt

## Result

The commands successfully monitored the log file, extracted ERROR entries, stored them in a report file, and suppressed unnecessary output.

# Question 5

## Objective

Evaluate the recovery mechanisms available in the **vi** editor.

## Recovery Mechanisms

### 1. Swap Files
- Temporary files created during editing.
- Help recover unsaved work after a crash.

### 2. Undo History
- Allows reversing previous changes during the editing session.

### 3. Registers
- Store copied and deleted text for later use.

### 4. Backup Files
- Copies of the original file created before editing (if enabled).

### 5. Auto-Recovery
- Uses swap files to recover unsaved changes after an unexpected shutdown.

## Most Reliable Recovery Method

Swap files with auto-recovery are the most reliable because they automatically preserve unsaved work and allow recovery after a system crash.

## Files

- config.txt

## Result

The vi editor provides multiple recovery mechanisms, with swap files and auto-recovery offering the best protection against data loss.

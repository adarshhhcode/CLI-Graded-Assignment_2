#!/bin/bash

processed=0
duplicates=0
backedup=0

mkdir -p backup
> processing_report.txt
> error.log

declare -A seen

for file in submissions/*
do
    if [ -f "$file" ]; then
        ((processed++))

        hash=$(md5sum "$file" 2>>error.log | awk '{print $1}')

        if [[ -z "${seen[$hash]}" ]]; then
            seen[$hash]=1
            cp "$file" backup/ 2>>error.log
            ((backedup++))
        else
            echo "$(basename "$file") is a duplicate" >> processing_report.txt
            ((duplicates++))
        fi
    fi
done

echo "Files Processed : $processed" >> processing_report.txt
echo "Duplicate Files : $duplicates" >> processing_report.txt
echo "Files Backed Up : $backedup" >> processing_report.txt

echo "Processing Completed."

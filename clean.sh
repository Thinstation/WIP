#!/bin/bash

# Loop through each folder in /ts/ports/*/*
for folder in /ts/ports/*/*; do
  # Check if the folder is indeed a directory
  if [ -d "$folder" ]; then
    # Find files greater than 1M in size within the folder, and count them
    count=$(find "$folder" -type f -size +1M | wc -l)
    # If the count is greater than 1, output the folder's name
    if [ "$count" -gt 1 ]; then
      echo "$folder"
    fi
  fi
done

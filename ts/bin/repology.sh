#!/bin/bash

# URL of the Repology project page
URL="https://repology.org/project/$1/versions"

# Fetch the latest version
latest_version=`curl -s https://repology.org/api/v1/project/$1 |jq -r 'map(select(.status == "newest")) | .[0].version'`

if [ -z "$latest_version" ]; then
  echo "Could not extract the latest version of $1."
else
  echo "The latest version of $1: $latest_version"
fi

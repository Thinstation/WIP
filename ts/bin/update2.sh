#!/bin/bash

# Check if a package name is provided
if [ -z "$1" ]; then
    echo "Usage: $0 <package_name>"
    exit 1
fi

package_name=$1

# Use prt-get to find the package path
package_info=$(prt-get info $package_name)

# Parse the Path
package_path=$(echo "$package_info" | grep "^Path" | cut -d ':' -f2 | xargs)

# Append the package name to get the full path
full_path="${package_path}/${package_name}"

# Check if the Pkgfile exists in the full path
if [ -f "${full_path}/Pkgfile" ]; then
    # Source the Pkgfile
    . "${full_path}/Pkgfile"
#    echo "Pkgfile from ${full_path} has been sourced."
else
    echo "Pkgfile does not exist in the expected location: ${full_path}"
    exit 1
fi

# Check if the "project" variable is set, if not, use the package name
if [ -z "$project" ]; then
    project=$package_name
fi

#echo "Project name for Repology query: $project"

# Fetch the latest version from Repology using the project name
latest_version=$(curl -s "https://repology.org/api/v1/project/$project" | jq -r 'map(select(.status == "newest")) | .[0].version')

if [ -z "$latest_version" ] || [ "$latest_version" == "null" ]; then
    echo "Could not extract the latest version of $project from Repology."
    exit 1
fi

#echo "The latest version of $project according to Repology: $latest_version"

# Assuming $version is set by the sourced Pkgfile
if [ -z "$version" ]; then
    echo "The version variable is not set by the Pkgfile."
    exit 1
fi

#echo "The current version from Pkgfile: $version"

# Compare versions
if [ ! "$latest_version" == "$version" ]; then
    echo "Package: ($package_name) Local Version: ($version) Repology Version: ($latest_version)"
    if [ -z "$2" ]; then
	    echo "Do you want to update the package? (y/n)"
	    read user_input
	    if [[ "$user_input" == "y" ]]; then
	        # Update the version in the Pkgfile
	        sed -i "s/^version=.*$/version=\"$latest_version\"/" "${full_path}/Pkgfile"
	        echo "Updated the Pkgfile with the latest version: $latest_version"

	        # Run prt-get update with specified options
		prt-get update -um "$package_name"
	        prt-get update -fr -if "$package_name"
	        echo "Package update initiated."
	    else
	        echo "Update canceled by the user."
	    fi
    fi
fi

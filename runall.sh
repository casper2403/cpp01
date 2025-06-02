#!/bin/bash

# Colors for output
GREEN='\033[0;32m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

echo -e "${BLUE}Building all exercises...${NC}"
make -s

# Define executables for each exercise based on the Makefiles
ex00_exec="./ex00/main"
ex01_exec="./ex01/main"
ex02_exec="./ex02/main"
ex03_exec="./ex03/main"
ex04_exec="./ex04/sed"
ex05_exec="./ex05/Harl"

# Array of all executables
executables=("$ex00_exec" "$ex01_exec" "$ex02_exec" "$ex03_exec" "$ex04_exec" "$ex05_exec")

# Run each executable
for exec in "${executables[@]}"
do
    if [ -f "$exec" ] && [ -x "$exec" ]; then
        echo -e "\n${GREEN}Running $exec${NC}"
        echo -e "${BLUE}----------------------------------------${NC}"
        $exec
        echo -e "${BLUE}----------------------------------------${NC}"
    else
        echo "Executable $exec not found or not executable"
    fi
done

echo -e "\n${GREEN}All executables have been run.${NC}"

echo -e "${BLUE}Cleaning all exercises...${NC}"
make -s fclean

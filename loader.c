#include <stdio.h>
#include <string.h>
#include "loader.h"

int loadInstruction(const char *inputFile, char *line, int PC) {
    FILE *file = fopen(inputFile, "r");
    if (file == NULL) {
        printf("Error opening file %s.\n", inputFile);
        return 0;  // Failed to open
    }

    // Skip lines until we reach the line at PC
    char buffer[9];  // Temporary buffer for reading lines
    int currentLine = 0;

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        // Ignore empty lines
        if (strlen(buffer) < 8) {
            continue;
        }

        // If we reached the desired line, copy it
        if (currentLine == PC) {
            strncpy(line, buffer, 8);
            line[8] = '\0';  // Ensure null-termination
            fclose(file);
            return 1;  // Successfully loaded instruction
        }

        currentLine++;
    }

    fclose(file);
    return 0;  // Reached end of file
}


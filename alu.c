#include <stdio.h>

//RA, RB, and result are global variables
char RA = 0; 
char RB = 0; 
char result = 0; 

char alu(char S) {
    if (S == 0) {
        result = RA + RB; // Perform addition
    } else {
        result = RA - RB; // Perform subtraction
    }
    return result; // Return the result
}


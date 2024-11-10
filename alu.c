#include <stdio.h>

//RA, RB, and result are global variables
// int RA = 0; 
// int RB = 0; 
//int result = 0; 

int alu(char S , int RA, int RB, int *carry) {
    int result = 0; 
    if (S == 0) {
        result = RA + RB; // Perform addition
        if (result > 15){
            result -= 16;
            carry = 1;
        }
        else {
            carry = 0;
        }
    } else if (S == 1) {
        result = RA - RB; // Perform subtraction
    }
    return result; // Return the result
}


#include <stdio.h>
#include "assembler.h"
#include "decoder.h"
#include "loader.h"

int RA = 0;
int RB = 0;
int carry = 0;
int jumpcarry = 0;
int sum = 0;
char J;
char C;
char D1;
char D0;
char Sreq;
char S;
char imm1;
char imm0;

int main() {
    // Assemble the file
    assembler("fibonacci.asm", "fibonacci.bin");

    // Initialize program counter
    int PC = 0;

    // Buffer to store the instruction
    char instruction[9];  // 8 bits + null terminator

    // Execute instructions until end of file
    while (loadInstruction("fibonacci.bin", instruction, PC)) {
        printf("\nExecuting instruction at PC=%d\n", PC);

        // Decode the instruction
        decodeInstruction(instruction, &J , &C, &D1 , &D0 , &Sreq, &S , &imm1 ,&imm0);
        sum = alu(S , RA, RB,  &jumpcarry);



        // Increment the program counter
        PC++;
    }

    printf("\nProgram completed. Total instructions executed: %d\n", PC);
    return 0;
}


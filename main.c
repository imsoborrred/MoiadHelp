#include <stdio.h>
#include "assembler.h"
#include "decoder.h"
#include "loader.h"
char J;
char C;
char D1;
char D0;
char Sreq;
char S;

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
        decodeInstruction(instruction);

        // Increment the program counter
        PC++;
    }

    printf("\nProgram completed. Total instructions executed: %d\n", PC);
    return 0;
}


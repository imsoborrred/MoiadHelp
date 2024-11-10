#ifndef MUX_H
#define MUX_H

// Global register declarations
extern char RA; // Register A
extern char RB; // Register B
extern char R0; // Register O

// Function prototype for the mux function
char mux(char enA, char enB, char enO, char Sreq, char imm, char alu);

#endif // MUX_H


#include <stdio.h>
#include "decoder.h"

void decodeInstruction(const char *line, char *J, char *C, char *D1, char *D0, char *Sreq , char *S , char *imm1, char *imm0) {
    // Decode each bit directly
    *J = line[0];
    *C = line[1];
    *D1 = line[2];
    *D0 = line[3];
    Sreq = line[4];
    *S = line[5]; 
    *imm1 = line[6];
    *imm0 = line[7];

    printf("Decoded bits from instruction:\n");
    printf("J= %c\n", J);
    printf("C= %c\n", C);
    printf("D1= %c\n", D1);
    printf("D0= %c\n", D0);
    printf("Sreq= %c\n", Sreq);
    printf("S= %c\n", S);
    printf("Imm1= %c\n", imm1);
    printf("Imm0= %c\n", imm0);
}


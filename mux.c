

void mux(char D1, char D0, char Sreq, int imm, int result, int *RA, int *RB, int *R0) {
    //Assumed global

    if (Sreq == 1 && D1 == 0 && D0 == 0) {
        *RA = imm;  
    } else if (Sreq == 1 && D1 == 0 && D0 == 1) {
        *RB = imm;  
    } else if (D1 == 1 && D0 == 0) {
        *R0 = RA;   
    } else if (Sreq == 0 && D1 == 0 && D0 == 0){
        *RA = result;  
    } else if (Sreq == 1 && D1 == 0 && D0 == 1) {
        *RB = result;  
    }

}


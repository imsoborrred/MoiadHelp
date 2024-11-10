

char mux(char enA, char enB, char enO, char Sreq, char imm, char result) {
    //Assumed global
    extern char RA; 
    extern char RB; 
    extern char R0; 

    if (Sreq == 1 && enA == 1) {
        RA = imm;  
    } else if (Sreq == 1 && enB == 1) {
        RB = imm;  
    } else if (Sreq == 1 && enO == 1) {
        R0 = RA;   
    } else if (Sreq == 0 && enA == 1) {
        RA = result;  
    } else if (Sreq == 0 && enB == 1) {
        RB = result;  
    } else if (Sreq == 0 && enO == 1) {
        R0 = RA;   
    }

    return 0; 
}


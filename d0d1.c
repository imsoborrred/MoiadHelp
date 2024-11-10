



void registers(int D0, int D1, char *enA, char *enB, char *enO) {
    *enA = 0;
    *enB = 0;
    *enO = 0;

    
    if (D0 == 0 && D1 == 0) {
        *enA = 1; // Enable Register A
    } else if (D0 == 0 && D1 == 1) {
        *enB = 1; // Enable Register B
    } else if (D0 == 1 && D1 == 0) {
        *enO = 1; // Enable Register O
    }
}


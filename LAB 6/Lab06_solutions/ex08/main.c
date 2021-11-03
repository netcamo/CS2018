#include <stdio.h>

int isRight(unsigned int A, unsigned int B, unsigned int C){
    unsigned int A2 = A * A;
    unsigned int B2 = B * B;
    unsigned int C2 = C * C;

    if (A2 / A != A || B2 / B != B || C2 / C != C){
        /* Multiplication overflow */
        return 0;
    } else if (A2 + B2 < A2 ){
        /* SUM overflow */
        return 0;
    } else if (A2 + B2 != C2){
        /* NOT right */
        return 0;
    } else {
        return 1;
    }
}

int main() {
    unsigned int A, B, C;

    /* Solution 1, this will be very slow, as huge number of iterations */
    /*
    for (A = 2; A < 0x0010000U; A++){
        for (B=A; B < 0x0010000U; B++){
            for (C=B; C < 0x0010000U; C++){
                 if (isRight(A, B, C)){
                     printf("Right: %d^2 +%d^2 == %d^2\n", A, B, C);
                     break;
                 }
            }
        }
    }*/

    /* Solution 2: large memory, but much faster */
    unsigned int square_table[0x10000] = {0, };
    unsigned int n_no_overflow = 0;
    for (A=2; A <  0x10000U; A ++){
        square_table[A] = A*A;
        if (square_table[A] / A != A) {
            break;
        } else {
            n_no_overflow = A;
        }
    }

    printf("NO Multiplication overflow till %u\n", n_no_overflow);

    for (A=2; A <n_no_overflow; A ++){
        for (B=A; B<n_no_overflow; B++){
            unsigned int AB = square_table[A] + square_table[B];
            if (AB > square_table[A]) {
                /* NO SUM overflow*/
                for (C=B+1; square_table[C] <= AB; C++){
                    /* once you find one solution, you don't need to search for C anymore */
                    if (AB  == square_table[C]){
                        printf("Right: %d^2 +%d^2 == %d^2\n", A, B, C);
                    }
                }
            }


        }
    }

    return 0;
}
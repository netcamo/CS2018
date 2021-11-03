#include <stdio.h>


int power(int base, int exponent){
    int res = 1;
    for (int i=0; i<exponent; i++){
        res = res * base; /* or you can write res *= base */
    }

    return res;
}

int main() {
    int base, exponent;
    int res;
    printf("Input base and exponent: ");
    scanf("%d%d", &base, &exponent);

    res = power(base, exponent);

    printf("Result is %d\n", res);

    /* or
    printf("Result is %d\n", power(base, exponent));
    */
    return 0;
}
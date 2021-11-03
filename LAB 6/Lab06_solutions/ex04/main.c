#include <stdio.h>

#define N 10

int main() {
    int v[N];
    int x;
    int pos;

    for (int i=0; i<N; i++){
        /*In total, N numbers are required*/
        scanf("%d", &x);

        pos = i; /* assume x should be inserted at the end */

        for (int j=0; j<i; j++){
            if (v[j] > x){
                pos = j; /* This is the position x needs to be inserted */
                j = i; /* or break */
            }
        }

        /* move all the numbers from pos one position back */
        for (int j=i; j>pos; j--){
            v[j] = v[j-1];
        }

        /* put x at pos*/
        v[pos] = x;

        /* to debug, we can print the whole array every step */
        printf("array has %d numbers: ", i+1);
        for (int j=0; j < i+1; j++){
            printf("%d ", v[j]);
        }
        printf("\n");

    }

    return 0;
}
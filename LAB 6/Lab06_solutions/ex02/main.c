#include <stdio.h>

#define N 5

int main() {
    /* For the further insight part */
    int v1[N], v2[N], counter1, counter2;
    int isSame = 1;

    printf("Input %d numbers for v1: ", N);
    for (int i=0; i<N; i++){
        scanf("%d", &v1[i]);
    }

    printf("Input %d numbers for v2: ", N);
    for (int i=0; i<N; i++){
        scanf("%d", &v2[i]);
    }

    for (int i=0; i<N && isSame; i++){
        counter1=0;
        counter2=0;

        /* Counter the number of times v1[i] appears in v1 and v2*/
        for (int j=0; j<N;j ++){
            if (v1[j] == v1[i])
                counter1 ++;
            if (v2[j] == v1[i])
                counter2 ++;
        }

        if (counter1 != counter2)
            isSame = 0;
    }

    if (isSame){
        printf("v1 and v2 are the same\n");
    } else {
        printf("v1 and v2 are NOT the same\n");
    }
    return 0;
}
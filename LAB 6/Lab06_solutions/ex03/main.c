#include <stdio.h>


#define N 5

int main() {
    /* This question has multiple solutions, the first one */
    int v[N];
    int v_flag[N] = {0, }; /* array to record corresponding number in v is checked or no*/
    int v_counter[N] = {0, }; /* array to record how many times a number appears */

    printf("Input %d numbers for the array: ", N);
    for (int i=0; i<N; i++){
        scanf("%d", &v[i]);
    }

    for (int i=0; i<N; i++){
        /* count for v[i] */
        if (v_flag[i] == 0){ /* v[i] has not been counted yet */
            for (int j=i; j<N; j++){ /* TOTHINK: starts from 0 */
                if (v[j] == v[i]){
                    v_flag[j] = 1;
                    v_counter[i] ++;
                }
            }
        }
    }

    for (int i=0; i<N; i++){
        if (v_counter[i] > 1){
            printf("In array %d appears %d times\n", v[i], v_counter[i]);
        }
    }

    /* Solution 2 you don't need a flag array */
    for (int i=0; i<N; i++){
        v_counter[i] = 0;
    }

    for (int i=0; i<N; i++){
        /* count for v[i] */
        if (v_counter[i] != -1){ /* v[i] has not been counted yet */
            for (int j=i; j<N; j++){ /* TOTHINK: starts from 0 */
                if (v[j] == v[i]){
                    v_flag[j] = 1;
                    v_counter[i] ++;
                    if ( i != j)
                        v_counter[j] = -1;
                }
            }
        }
    }

    for (int i=0; i<N; i++){
        if (v_counter[i] > 1){
            printf("In array %d appears %d times\n", v[i], v_counter[i]);
        }
    }


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{


    int N ;
    scanf("%d", &N) ;
    int a[N] ;
    int i=0;
    for (i =0 ; i <N; i++) {
        scanf ("%d" , &a[i]) ;
    }

    for (i=0 ; i<N-2 ; i++ ) {

        if (a[i]<a[i+1]&&a[i+1]<a[i+2]) {
            printf("in position %d  \n series : %d %d %d" , i+1 ,a[i],a[i+1],a[i+2]);
            break;
        }
    }







    return 0;
}

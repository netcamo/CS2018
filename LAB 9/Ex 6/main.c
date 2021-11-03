#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define N 7


int main()
{

    int level=0 ;
    int i,j ;


    int q[N][N] ;
    for (i= 0 ; i < N; i++) {
        for (j=0 ; j<N; j++) {
            q[i][j]=0 ;
        }
    }

        int center;
        int count=1 ;
        int k;
        if (N%2==0) k=N/2-1 ;
        else k=N/2 ;

       for (center=0 ; center<=k; center++) {
             i=center ,j=center ;
            count=1 ;
            for (j ; j<N-center ;  j++) {
                    q[center][j]=count++ ;   }
                i++ ;
                j-- ;
            for (i ; i<N-center ; i++) {
                q[i][j]=count++ ;
            }
            i-- ;
            j-- ;
            for (j ; j>=0+center ; j--) {
                q[i][j]=count++ ;
            }
            j++ ;
            i-- ;
            for (i ; i>0+center  ; i--) {
                q[i][j]=count++ ;
            }





       }









    for (i=0 ; i<N; i++) {
        for (j=0 ; j< N; j ++ ) {
            printf ("%-3d  " ,q[i][j] ) ;
        }
        puts("");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10

int main()
{
    FILE* fpin ;
    fpin=fopen("Q.dat" , "r") ;
    if (fpin==NULL){
        puts("NOt opened file!") ;
        return 0 ;
    }
    float tmp ;
    float Q[N+2][N+2] ;
    int i=0;
    int j=0 ;
    for (i=0 ; i<=N+1 ; i++) {
        for ( j=0 ; j<=N+1 ; j++) {
            Q[i][j]=-1 ;
        }
    }

     for (i=1; i<=N ;i++) {
        for (j=1; j<=N ; j++) {
            fscanf(fpin, "%f",&tmp) ;
            Q[i][j]=tmp ;

        }
     }




     int x0,y0 ;
     scanf("%d %d", &x0, &y0) ;
     while(1) {
        printf("(%d,%d) " , x0,y0);

        float max=Q[i][j] ;
        int xm=x0,ym=y0 ;

        for (i=x0-1 ; i<=x0+1; i++) {
            for (j=y0-1 ; j<=y0+1; j++) {
                if (Q[i][j]>Q[x0][y0]) {
                    max=Q[i][j] ;
                    xm=i ;
                    ym=j ;
                }
            }
        }

        if (xm==x0 && ym==y0) break ;
        else {
            x0=xm ;
            y0=ym ;
        }



     }


    /*  for (i=0 ; i<=N+1; i++)
    {

        for (j=0 ; j<=N+1 ; j++) {
            printf ("%f ", Q[i][j]);
        }
        puts("");
    }

    */


    return 0;
}

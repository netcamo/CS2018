#include <stdio.h>
#include <stdlib.h>
#define N 5

void mult (int v[] , int n , int x) {
int i =0 ;
for (i= 0 ; i< N ; i++) {
    v[i]*=x;
    }

}
int main()
{
        printf ("ENter %d values : \n",N);

        int i ,vect[N] ;
    int x ;
    for (i =0 ; i<N ;i ++ )scanf("%d",&vect[i]) ;
    scanf("%d",&x) ;
    mult( vect,N,x) ;
    for (i=0 ; i<N; i++) {
        printf ("%d ", vect[i]) ;
    }
    puts("") ;


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 5

int power ( int base , int exponent) {
 int i,result=1 ;
 for (i=0 ; i<exponent; i++) {
    result*=base ;
 }
return result ;

}
int main()
{

           int vbase[N] ;
           int vexponent [N] ;
           int vres [N] ;
           printf ("Enter base array :\n") ;
            int i ;
            for (i=0 ; i<N; i++) {
                scanf("%d",&vbase[i]) ;
            }
            printf("Enter exponent array :\n") ;
            for (i =0 ; i<N; i++) {
                scanf("%d",&vexponent[i]) ;
            }
            for (i =0 ; i< N; i++) {
                vres[i]=power(vbase[i],vexponent[i]) ;
            printf("%d ",vres[i]) ;
            }
            puts("") ;



    return 0;
}

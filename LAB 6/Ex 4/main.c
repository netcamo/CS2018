#include <stdio.h>
#include <stdlib.h>
#define N 10


void swap (int* a  , int* b) {
    int temp ;

    temp=*a ;
    *a=*b ;
    *b=temp ;

}


int main()
{

     //   int f=5,d=3 ;
   // swap(&f,&d) ;
 //   printf ("%d ,%d" , f, d) ;



    int a[N] ;
    int j ,temp ,i ;
    for (i =0 ; i< N ; i++) {
        scanf("%d",&temp);

        if (i==0) {a[i]=temp ;}
        else {


            for(j=i-1 ; j>=0 ; j--) {
                if (a[j]<temp){
                    j=j+1 ;
                    break ;
                }
            }
            if (a[i-1]<temp) j=i ;

            for (j; j<=i; j++) {
                swap(&temp, &a[j]) ;
            }


        }

    }

    printf ("\n") ;
    for (  i =0 ; i< N ; i++) {
        printf( "%d " , a[i]) ;
    }



    return 0;
}

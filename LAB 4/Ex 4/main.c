#include <stdio.h>
#include <stdlib.h>

int main()
{




   int n ,i , j , k ;
   scanf ("%d" ,&n) ;

    int spaces =0 ;
    int star=n ;
   for (i=1  ;i <=(n+1)/2 ;i++) {
     for (j=0 ; j<spaces ; j++){
        printf (" ") ;
     }
     for (j=0 ; j<star ; j++) {
        printf("*") ;
     }
     spaces++ ;
     star-=2;
     printf("\n") ;
   }


    return 0;
}

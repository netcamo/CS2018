#include <stdio.h>
#include <stdlib.h>

int main()
{


    int f1 =1 ,i,  f2=1 ,f3 ;
    printf( " 0  1  1  ") ;
    for (i =0; i<17 ; i++) {
        f3=f2 ;
        f2=f1+f2 ;
        f1=f3 ;
        printf ("%d  ",f2) ;
    }





   return 0;
}

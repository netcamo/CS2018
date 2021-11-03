#include <stdio.h>
#include <stdlib.h>

int main()
{

int a[4] , i ;
int minn=1500 , maxx=-1;
for ( i= 0; i< 4 ; i++) {
    scanf ("%d" , &a[i]) ;
    if (a[i]<0||a[i]>=1000) {
        a[i]= 0 ;
        printf("\nError!\n\n") ;
    }

  //  printf ("%d ", a[i]) ;
    maxx= (a[i]>maxx ? a[i] : maxx) ;
    minn = (a[i]<minn ? a[i] : minn);
}
//printf("\n") ;

int diff= maxx - minn ;

printf ("Max Difference  is : \t%d" , diff);



    return 0;
}

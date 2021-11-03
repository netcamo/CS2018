#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int i =0 ;
    int a[N] ;
    int temp ;
    for ( i=0 ; i<N ; i++) {
        scanf ("%d",&temp) ;
        if (i>1) {

            if (a[i-1]>a[i-2] && temp<=a[i-1])break ;
            else if (a[i-1]<a[i-2] && temp>=a[i-1])break ;
            else a[i]=temp ;
        }
        else a[i]=temp ;
    }

int j=0 ;
    for (j=0 ;j<i ; j++) {
        printf("%d ",a[j]) ;
    }

    return 0;
}

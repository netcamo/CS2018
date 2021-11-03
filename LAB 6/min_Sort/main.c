#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{

    int a[] = {1 ,4 ,2 ,8, -5 ,4 ,2 ,8, 19, 0} ;

    int  i , j , minn , temp;

        for (i =0 ; i<N ; i++) {
            minn= a[i] ;

            for (j=i ; j<N ; j++) {
                if (a[j]<a[i]) {
                    temp=a[i] ;
                    a[i]=a[j] ;
                    a[j]=temp ;
                }
            }

     }

for (i=0 ; i< N ; i++) {
    printf("%d " , a[i]) ;
}

    return 0;
}

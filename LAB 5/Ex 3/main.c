#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{


    int v1[N] ;
    int v2[N] ;


    int i=0, j=0 ;
    int a;
    while ( !(i==N||j==N) && scanf("%d",&a))
    {
        if (a>0 || (a<0 &&(-1*a)%3==0 ))
        {
            v1[i]=a ;
            i++ ;
        }
        else if (a<0 && ( (-a)%2==1  ) && (-a)%3!=0  )
        {
            v2[j]=a ;
            j++ ;
        }
    }
    int t=0 ;

    printf ("1st array : \n");
    for (t=0 ; t<i ; t++)
    {
        printf("%d ",v1[t]) ;
    }
    printf ("\nsecond array : \n");


    for (t=0 ; t<j ; t++)
    {
        printf("%d ",v2[t]) ;
    }




    return 0;
}

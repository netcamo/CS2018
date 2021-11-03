#include <stdio.h>
#include <stdlib.h>

#define N 5

int main()
{


    int i=0,a[N] ;
    int flag =0 ;
    for ( i =0 ; i<N ;i++) {
        scanf("%d" , &a[i]) ;
    }
    for (i=0 ;i<N; i++) {
        if (a[i]!=a[N-i-1]){ flag=1 ; break ;}
    }
    printf ("Sequence is %s" , (flag==0 ? "Palindrome" : "not Palindrome")) ;


    return 0;
}

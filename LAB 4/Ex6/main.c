#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N ;
    scanf( "%d" , &N) ;
    int count =0 ;
    int sum = 0 ;

    int avg ;
    int a ;
    do {

        scanf("%d",&a) ;


        sum+=a ;
        count++ ;
        avg=sum/count ;


    }while (!(avg>N || count>=10));


    printf("%d\n" , sum) ;


        return 0;
}

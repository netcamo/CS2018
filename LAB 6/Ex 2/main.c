#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{















    int v1[N+1] ;
    int i,v2[N+1] ;
    for (i=1 ; i<= N ; i++)
    {
        scanf("%d", &v1[i]) ;
    }
    for (i=1 ; i<= N ; i++)
    {
        scanf("%d", &v2[i]) ;
    }
    int flag=0 ;
    int count_in_1 =0 ;
    int j,count_in_2 =0 ;


    for (i =1 ; i<=N ; i++)
    {
        count_in_1=0;
        count_in_2=0;
        for (j=0; j<=N ; j++)
        {
            if (v1[i]==v1[j]) count_in_1++ ;
            if (v1[i]==v2[j])count_in_2++ ;
        }
        if (count_in_1 != count_in_2)  flag=1;
    }


    printf( "Contains %s",  (flag==0 ? "Same elements" : " NOT same elements")) ;



    return 0;
}

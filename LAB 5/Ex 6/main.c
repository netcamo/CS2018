#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{


    int a1[N] ;
    int temp ;
    int i=0 ;
    while (scanf("%d",&temp))
    {
        if (temp<0)break ;
        else a1[i++]=temp ;
    }
    int a2[N] ;
    int j=0 ;
    int flag =0 ;
    while (scanf("%d", &temp))
    {
        if (temp<0 ) break ;
        else
        {
            flag =0 ;
            for (i =0 ; i<N ; i++)
            {
                if (a1[i]==temp )
                {
                    if (flag==0)
                    {
                        printf (" \npositions  of %d  : ", temp) ;
                        flag=1 ;
                    }
                    a2[j++]=i+1 ;
                    printf ("%d ", i+1) ;
                }

            }
            printf("\n") ;

        }
    }

    return 0;
}

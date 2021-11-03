#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{

        int i,a[N][2] ;

        for (i=0 ; i<N ; i++) {
             scanf("%d",&a[i][0]) ;
             a[i][1] =0 ;
        }
        int count=0 ;
        int j ;
        for (i =0 ; i< N; i++) {
                count =0 ;
            if (a[i][1]==0) {
                for (j=i ; j<N ; j++) {
                    if (a[j][0]==a[i][0]){
                        count ++ ;
                        a[j][1]=1 ;
                    }
                }
                printf ("There are %d  values equal to %d\n",count , a[i][0]) ;
            }

        }



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{



    int i;
    int a[10] ;
    int temp ;
    for (i=0 ; i<10 ; i++) {
        scanf("%d",&temp) ;
        a[i]=temp ;
    }
    for (i=0 ; i< 10  ; i++) {
        printf( "%d " , a[i]);
    }
    printf("\n") ;
    float avg ;
    float sum=0;
    for (i=0 ; i<10 ; i++) {
        sum=sum+a[i] ;
       // printf ("-----------------%d  :   %f-----------\n",a[i], sum) ;
    }
  //  printf ("--------------- %f \n",sum) ;
    avg=sum/10 ;
    printf ("average is : %f\n" ,avg);

    int max=a[0] ;
    int pos=0 ;
    for (i=0 ; i<10 ; i++) {
        if (max<a[i]) {
            max=a[i] ;
            pos=i ;
        }
    }
    printf( " The max is  :%d  \n its position is : %d" , max , pos+1 );

     return 0;
}

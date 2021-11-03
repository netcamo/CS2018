#include <stdio.h>
#include <stdlib.h>

#define K 10
int main()
{


    int a,b,c,d ;
    printf("Enter 4 parameters : \n") ;
    scanf ("%d %d %d %d",&a,&b,&c,&d) ;
    float x;
     if (a+b*c==0) { printf("Error\n") ;return 0;
     }
     else {

        x=-1.0*(((float)(d*K))/( (float)(a+b*c))) ;
        printf( "Answer is :\t%f",x) ;
     }




    return 0;
}

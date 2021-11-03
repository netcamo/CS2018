#include <stdio.h>
#include <stdlib.h>

int main()
{

    float  price, tax, receipt ;
    printf( " Price : ");
    scanf ("%f" ,&price ) ;
    printf( " Tax : ");
    scanf ("%f" ,&tax ) ;

    receipt =   (price + (price*tax)/100.0) ;
    printf("Receipt is : %.2f" ,receipt) ;



    return 0;
}

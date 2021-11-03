#include <stdio.h>
#include <stdlib.h>


int power (int base , int exponent) ;


int main()
{


    int base , exponent ;
    scanf("%d %d" , &base , &exponent) ;

    printf ("Their power is : %d" , power(base, exponent)) ;

    return 0;
}

int power (int base , int exponent) {

int i=0,value =1 ;
for (i ; i<exponent; i++) {
    value*=base ;
}
return value;


}

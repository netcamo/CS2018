#include <stdio.h>
#include <stdlib.h>

#define BasePrice 100
#define ExtraPrice 40
#define UsedPrice 20


int main()
{


    int price , feature , months ,years;
    scanf("%d  %d" , &feature , &years) ;
    months=12*years ;
    //printf("%d" ,months) ;
    price = (feature*ExtraPrice + BasePrice  - months*UsedPrice) ;
    printf("Maximum  Expendable Price is : %d" , price) ;


    return 0;
}

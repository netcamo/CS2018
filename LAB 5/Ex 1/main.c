#include <stdio.h>
#include <stdlib.h>

int gcd ( int a , int b ) {

return (a==0 ? b : gcd(b%a,a)) ;


}



int main()
{
//    printf ("%d" , gcd(45, 9)) ;
    int a,b;

    printf ("Enter 2 integer A and B : ") ;
    scanf("%d  %d" , &a,&b) ;
    printf ("Their gcd is  : %d " , gcd(a,b)) ;





    return 0;
}

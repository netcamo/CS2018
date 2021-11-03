#include <stdio.h>
#include <stdlib.h>

int main()
{


     int int_1 , int_2;
     float float_1 , float_2 ;
     printf ("Enter 4 numbers : \n") ;
     scanf ("%d %d %f %f", &int_1 , &int_2 , &float_1 ,& float_2) ;
     //int_1 =int_2=3 ;
     // float_1=float_2=0.5 ;
     printf ("%5d%5d\n", int_1 , int_2) ;
    printf ("%5.2f\n",float_1) ;
    printf ("%5.3f",float_2) ;



    return 0;
}

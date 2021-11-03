#include <stdio.h>
#include <stdlib.h>
#include  <ctype.h>
int main()
{


    char c1 , c2 ;
    scanf("%c ",&c1) ;

    scanf("%c",&c2) ;
    if (isalpha(c1) && isalpha(c2)) {

           if ( ! (  (int)c1 == (int)c2   )     ){

            if (   (int)c1 - (int)c2>0  ) printf ("%c  %c" , c2, c1) ;
            else printf ("%c %c" , c1,c2) ;

           }



    }
    else {
        puts("At least one of them is  not alphabetic!") ;
    }

    return 0;
}

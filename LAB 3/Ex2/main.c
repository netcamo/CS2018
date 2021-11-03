#include <stdio.h>
#include <stdlib.h>




int main()
{

        int A=0 ;
        int B=0 ;
        int result ;
        for (A ;A<=1 ; A++) {
            for (B=0;B<=1 ; B++) {
                        printf ("A is %d\tB is %d\tAnswer is : ",A,B) ;
                result = ((A&&B)||(!B))&&(!A) ;
                printf("%d\n",result) ;
            }
        }



    return 0;
}

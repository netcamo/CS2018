#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100


int main()
{
        char s[MAX] , s2[MAX] ;
        scanf("%s",&s) ;
        scanf("%s",&s2) ;
        int i,n =strlen(s) ;
        int alpha=0  , num=0 ;
        for (i=0 ; i< n ;i++) {
            if (isalpha(s[i])) alpha++;
            else num++ ;
        }

    printf ("Alpha :  %d \n Num : %d \n",alpha , num) ;
    int k=1 ;
    if (strstr(s,s2)==NULL ) k=0 ;
    printf ("\n%s\n" , (k==1 ?  "YES!" : "NO")) ;


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{




    char s[10000] ;
    while (gets(s)) {
        int n =strlen(s) ;
        int i,flag=1 ;
        for (i =0 ; i< n ;i++) {
          if (isalpha(s[i])&&flag==1) { s[i]=toupper(s[i]) ;flag=0 ; }
          if (isspace(s[i])&& isalpha(s[i+1]) && i+1<n) flag=1 ;
        }

        for (i=0 ; i< n ; i++) {
            printf("%c",s[i]) ;
        }
        puts("") ;

    }




    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int main()
{
    char s[N] ;
    gets(s) ;
    int n ,i;
    n=strlen(s) ;
    for (i=0 ; i< n; i++) {
        if (islower(s[i]))toupper(s[i]) ;
        if (!isalnum(s[i])) s[i]='_';
        if (isdigit(s[i])) s[i]='*' ;

    }

    char c_prev=" " ;
    char c_now ;
    int word=0 ;
    for (i =0 ; i< n ;i++) {
        c_now=s[i] ;
        if (!isalpha(c_prev) && isalpha(s[i])) word++ ;
        c_prev=c_now ;

    }
    printf ("%d",word) ;

    return 0;
}

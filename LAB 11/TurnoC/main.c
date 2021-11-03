#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 4
#define N 11


int main()
{


    FILE* input=fopen("bath.txt" ,"r") ;
        int i , j ;
        char s[1000] ;
    char map[N][N] ;
    j=0 ;
    while(fgets(s,1000 , input)!=NULL) {

        for (i=0; i<strlen(s)-1 ; i++) {
            map[j][i]=s[i] ;
        }
        j++ ;

    }

    for (i=0 ; i<N; i++) {
        for (j=0 ; j<N; j++) {
            printf("%c",map[i][j]) ;

        }
        puts("") ;
    }




    fclose(input) ;
    return 0;
}

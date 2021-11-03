#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

 int word_count ( char s[]) {

 int i ,N =strlen(s),j,flag,word=0 ;

 for (i= 0 ; i<N ; i++) {
    if (isalpha(s[i]) && (i==0 || isalpha(s[i-1]))) {
        flag=1 ;
        for (j=i ; j<N; j++ ) {
            if (j==N-1 && isalpha(s[j])) i=j ;
            if (j==N-1 && !isalpha(s[j])) {flag= 0 ; i=j ; break;}
            if (!isalpha(s[j])) {

                if (isspace(s[j])) {
                    flag=1;
                    i=j ;
                    break ;
                }
                else {
                        i=j;
                    flag=0 ;
                    break ;
                }
            }
        }
        if (flag==1) word++;


    }

}


return word ;
 }


int main()
{

char s[10000] ;
gets(s) ;
printf("Total number of characters  is  : %d \n",strlen(s)) ;
int i,upper =0 ,alpha=0 ,numer=0,space=0;
int  N= strlen(s) ;
int word=0 ;
int j ,flag  ;
for (i= 0 ; i<N ; i++) {
    if (isalpha(s[i]) && (i==0 || isalpha(s[i-1]))) {
        flag=1 ;
        for (j=i ; j<N; j++ ) {
            if (j==N-1 && isalpha(s[j])) i=j ;
            if (j==N-1 && !isalpha(s[j])) {flag= 0 ; i=j ; break;}
            if (!isalpha(s[j])) {

                if (isspace(s[j])) {
                    flag=1;
                    i=j ;
                    break ;
                }
                else {
                        i=j;
                    flag=0 ;
                    break ;
                }
            }
        }
        if (flag==1) word++;


    }

}


for ( i =0 ; i<N; i++) {
    if (isupper(s[i])) upper++ ;
    if (isalpha(s[i])) alpha++ ;
    if (isdigit(s[i])) numer++ ;
    if (isspace(s[i]))  space++ ;

}

printf ("NUmber of Alphabetic characters is : %d \n Number of Uppercase characters is : %d \n Number of digits is : %d \n Number of spacing characters  is : %d \n Number of words is : %d\n",alpha ,upper,numer , space , word);



    return 0;
}

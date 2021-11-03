#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  <ctype.h>


 int word_count ( char s[]) {

 int i ,N =strlen(s),j,flag,word=0 ;

 for (i= 0 ; i<N ; i++) {
    if ((isalpha(s[i]) && (i==0 || isalpha(s[i-1]))) || (isalpha(s[i]) && ( isspace(s[i-1]) && isspace(s[i+1]) && i+1<N && i-1>=0  ) )  ||  (isalpha(s[i])&& i==0 && isspace(s[i+1])) || (isalpha(s[i]) && isspace(s[i-1]) ) ) {
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
    char s[100000] ;
    int num_lines=0 ;
   int num_words =0 ;
    float avg_len =0 ;
    int sum_len=0 ;
    while (gets(s)!=NULL) {

              num_lines++ ;
              num_words += word_count(s)  ;

            printf ("%d \n" ,word_count ( s)) ;




    }





    return 0;
}

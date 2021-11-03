#include <stdio.h>
#include <stdlib.h>
#include <string.h>




    int word_lengths[20] ;

int main()
{

    char s[60] ;
    gets(s) ;

    int n , i  , word=0 , length=0 , total_length=0 ;
    n=strlen (s) ;
    char c_prev=' ';
    char c_now ;
    int in_word=0 ;
    int word_count=0 ;
    printf("%s\n",s) ;
    for (i =0 ; i< n ;i++) {
        c_now=s[i] ;
        if (isspace(c_prev)&&isalpha(s[i])) {
                in_word=1 ;
                word_lengths[word]++ ;
                }
        else if (!isalpha(c_now)) { in_word=0 ; word++ ;}

      else  if (in_word==1 ) {
            word_lengths[word]++ ;
        }
        c_prev=c_now ;


    }

    for (i=0 ; i<word ; i++) {
   //     printf("%d   " , word_lengths[i]) ;
    }

    for (i=0 ; i<word ; i++) {
       if (word_lengths[i]>0) word_count++;
    }
    printf (" There are %d words \n " , word_count) ;
    float avg=0 ;
    for (i=0 ; i< word ; i++) {
        avg+=(float)word_lengths[i] ;
    }
    avg/=(float)word_count ;
    printf("The average length of words is %.3f \n",avg) ;
    int j=0;
    int count=0 ;
    for (i=0 ; i<word ; i++) {
            count=0;
        if (word_lengths[i]>0) {
            for(j=i+1;j<word;j++) {
                if (word_lengths[i]==word_lengths[j]){
                    word_lengths[j]=0 ;
                    count++ ;
                }
            }
            count++;
           printf("There are %d words which are length of %d \n",count , word_lengths[i]) ;


        }


    }




    return 0;
}

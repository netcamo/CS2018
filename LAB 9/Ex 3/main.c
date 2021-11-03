#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main()
{

        char s[20] ;
        FILE* fpin ;
        gets(s) ;
       fpin= fopen(s , "r") ;
       if (fpin==NULL) {

        exit(1) ;
       }

       int count =0 ;
       int i =0 ;
       int j;

        char trips[20][2][20] ;
        while (1) {
           FILE* z=fgets(s,100,fpin) ;
               if (z==NULL )break ;


                           //   puts("YE") ;
        sscanf(s , "%s %*s %s %*s" ,trips[count][0] , trips[count][1]) ;
        count++;
      //  printf("%s %s \n" , trips[count-1][0] , trips[count-1][1]) ;


       }

        fclose(fpin) ;

        gets(s);
        sscanf(s, "%s" ,s) ;

        int ar=0 ,dep=0 ;
        for (i=0 ; i<count ; i++) {
            if (strcmp(s,trips[i][0])==0) dep++ ;
            if (strcmp(s,trips[i][1])==0) ar++ ;
        }


         printf("Trains that departure from %s  : %d\n",s,dep ) ;
        printf ("Trains that arrive to %s  : %d \n" , s, ar) ;



    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{


//        char t1[100]="sa" ,t2[100]='w',t3[100] ;

//    t2="w"   ;
   // strcat(t1 ,t2);
  //  puts(t1) ;


    char s[250] ;
    char i,se[250][250] ;
    int count=0 ;
    while (gets(s)!=NULL){ // Ctrl+Z produces EOF for gets
        count++ ;
        int n = strlen (s) ;
        char tmp[250] ;

        strcpy(tmp, s) ;
        int p=0 ;
        char fin[250]="" ;
     //   puts("FUUUCL") ;
//             flag =0 ;
        for (i=0 ; i<n ; i++) {


            if (tmp[i]=='c'&& tmp[i+1]=='h') {
                fin[p]='k' ;
                p++ ;
                i++ ;
            }
            else if (tmp[i]==fin[p-1] ) {

            }
            else {
                fin[p]=tmp[i];
                p++ ;
            }
    }
    fin[p]='\0' ;
          strcpy(se[count],fin) ;
       // if (count==3) break ;


    }
    for (i=1; i<=count ;i++) {
        puts(se[i]) ;
    }


    return 0;
}

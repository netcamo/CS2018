#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3


int main(int argc , char* argv[])
{

    FILE* input=fopen(argv[1] , "r");
    FILE* output=fopen (argv[2] , "w") ;

    int mat[101][101] ;

    char s[1002] ;
    int max_flag=0 ;

        int i,j ;
        i=0 ;
    while (fgets(s , 1000 , input)!=NULL) {
        for (j=0 ; j<strlen(s) ; j++) {
            if (s[j]=='X'){
                mat[i][j]=1 ;
                if (max_flag<j)max_flag=j;
            }
            else mat[i][j]=0 ;
        }
             for (j; j<101 ; j++) {
                mat[i][j]=0 ;
             }


     //   printf("%d\n" , strlen(s)) ;
        i++ ;




    }


    for (i=0 ; i<7 ; i++) {
        for (j= 0 ; j<=max_flag ; j++){
            printf("%d ",mat[i][j]) ;
        }
             puts("");

    }


        int arr[101] ;
        int sum= 0 ;
        int maxx=-N ;
        int maxx_place=0 ;
        for (i=0; i<=max_flag ; i++) {
                sum=0;
            for (j=0 ; j<N ; j++) {
                sum+=mat[j][i] ;
            }
            for (j ; j<=2*N; j++) {
                sum-=mat[j][i] ;
            }

            arr[i]=sum ;
            fprintf(output , "%d " ,arr[i]) ;
            if(maxx<=sum) {
                    maxx=sum ;
            maxx_place=i ;
            }
        }
        printf("%d %d" ,maxx , maxx_place+1) ;
    fclose(input) ;
    fclose(output) ;






    return 0;
}

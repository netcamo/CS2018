#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc , char* argv[])
{

 FILE* fin=   fopen(argv[1] , "r") ;
 if (fin==NULL) {puts("something is wrong" ) ;exit(1);}
 //puts(argv[1]) ;
    int j,i,a[5][5] ;
    char s[100] ;
    for (i=0 ; i<5 ; i++){
        fgets(s,25,fin);
       // puts(s) ;
        sscanf(s , "%d %d %d %d %d" , &a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]) ;
    }

    //for (i=0 ; i<5; i++) {
   //     for (j=0 ;j <5; j++) printf("%d " , a[i][j]) ;
     //   puts("") ;
    //}

    int value ;
    int quantity ;
    //printf (" Enter the value to search and how much to search :\n") ;
   //  scanf("%d %d",&value , &quantity) ;


    value = atoi(argv[2]);
    quantity= atoi(argv[3]) ;
    int ch[5]= {0,0,0,0,0} ;
    int col[5]={0,0,0,0,0};
    //for (i=0 ; i<5; i++) {
    //    for (j=0 ;j<5; j++) {
     //       scanf("%d",&a[i][j]) ;
    //    }
   // }
    int count =0 ;
    int k ;
    for (i=0 ; i<5; i++) {
        count =0 ;
        for (j=0 ;j<5; j++) {
            count=0 ;
            if (a[i][j]==value) {

                for (k=j ; k<5; k++) {
                        if (a[i][k]==value) {
                            count++ ;
                            if (count==quantity) {
                                ch[i]=1 ;
                                break ;
                            }
                        }
                        else {
                                break ;

                        }                }


            }
        }
    }


    for (i=0 ; i<5; i++) {
        count =0 ;
        for (j=0 ;j<5; j++) {
            count=0;
            if (a[j][i]==value) {

                for (k=j ; k<5; k++) {
                        if (a[k][i]==value) {
                            count++ ;
                            if (count==quantity) {
                                col[i]=1 ;
                                break ;
                            }
                        }
                        else {
                                break ;

                        }                }


            }
        }
    }




    for (i=0 ; i<5 ; i++) {
        if (ch[i]==1) {
                printf("The sequence is found on row %d \n",i+1) ;
        }
    }


    for (i=0 ; i<5 ; i++) {
        if (col[i]==1) {
                printf("The sequence is found on column %d \n",i+1) ;
        }
    }
    fclose(fin) ;
    return 0;
}

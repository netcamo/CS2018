#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{


    int j,i,a[5][5] ;
    int value ;
    int quantity ;
    printf (" Enter the value to search and how much to search :\n") ;
    scanf("%d %d",&value , &quantity) ;
    int ch[5]= {0,0,0,0,0} ;
    int col[5]={0,0,0,0,0};
    for (i=0 ; i<5; i++) {
        for (j=0 ;j<5; j++) {
            scanf("%d",&a[i][j]) ;
        }
    }
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
    return 0;
}

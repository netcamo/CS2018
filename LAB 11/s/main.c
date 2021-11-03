#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc , char* argv[])
{


    FILE* fin=fopen(argv[1],"r") ;



    int mat[3][3] ;

    int i,j ;
    char s[200] ;
    int placeofnegi=0 ,placeofnegj ;
    for (i=0 ; i<3; i++)
            {
                fgets(s,200 ,fin) ;
                sscanf(s ,"%d %d %d" , &mat[i][0],&mat[i][1],&mat[i][2] ) ;
                if (mat[i][0]==-1) {
                    placeofnegi=i ;
                    placeofnegj=0 ;
                }
                else if (mat[i][1]==-1){
                    placeofnegi=i ;
                    placeofnegj=-1 ;
                }
                else if (mat[i][2]==-1){
                    placeofnegi=i ;
                    placeofnegj=2 ;
                }
            }




     int sums[8];
     for (i=0 ; i<3; i++) {
        sums[i]=mat[i][0]+mat[i][1]+mat[i][2] ;
      }
      for (i=0 ; i<3; i++) {
        sums[i+3]=mat[0][i]+mat[1][i]+mat[2][i] ;
      }
      int k=6 ;
      sums[6]=mat[0][0]+mat[1][1]+mat[2][2] ;
      sums[7]=mat[0][2]+mat[1][1]+mat[2][0] ;

    int difsum1,difsum2=-2 , difsum3=-2,countsum1=1,countsum2=0,countsum3=0 ;
    difsum1=sums[0] ;
    for (i=1; i<8 ; i++) {
        if (sums[i]==difsum1){
            countsum1++;
        }
        else if (difsum2==-2) {
            difsum2=sums[i];
            countsum2++ ;
        }
        else if (difsum2!=-2&&difsum2==sums[i]){
            countsum2++ ;
        }
        else if (difsum2!=sums[i]){



            printf("It is not possible to complete the magic square") ;
            return 0 ;
        }


    }


    if (abs(countsum1-countsum2)==0 || abs(countsum1-countsum2)==2) {
        printf("It seems possible to try to complete the  magic square \n") ;
        printf("Magic number is %d \n", (difsum1>difsum2 ? difsum1 : difsum2)) ;
        mat[placeofnegi][placeofnegj]=abs(difsum1-difsum2)-1 ;


        for (i=0 ; i<3; i++) {
        sums[i]=mat[i][0]+mat[i][1]+mat[i][2] ;
      }
      for (i=0 ; i<3; i++) {
        sums[i+3]=mat[0][i]+mat[1][i]+mat[2][i] ;
      }
      int k=6 ;
      sums[6]=mat[0][0]+mat[1][1]+mat[2][2] ;
      sums[7]=mat[0][2]+mat[1][1]+mat[2][0] ;
      for (i=0 ; i<7; i++) {
        if (sums[i]!=sums[i+1]) {
            puts("Impossible to complete this shit!") ;
            return 0 ;
        }
      }


        for (i=0 ; i<3; i++) {
            for (j=0 ; j<3 ; j++) {
               printf ("%d " ,mat[i][j]) ;
            }
            puts("") ;
          }


    }
    else {puts("It is impossible to try to complete this shit ");}




    return 0;
}

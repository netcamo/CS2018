#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc , char* argv[])
{

    int x[5] ;
    int y[5], i=0,j=0 ;
    for (i=1 ; i<=4; i++) {
        scanf("%d %d", &x[i],&y[i]) ;
    }
    int Path=0 ;
    int length[3] ;
    for (i=1; i<4 ; i++) {
        length[i]=( int )sqrt((float)( (x[i]-x[i+1])*(x[i]-x[i+1])+(y[i]-y[i+1])*(y[i]-y[i+1])) );
        Path+=length[i] ;
    }

    if (argv[1][1]=='m') {printf("%d\n",Path);}
    else {

        int mini=Path ;
        int ini;
        for (i=1; i<=3 ; i++) {
            for (j=i+1 ; j<=4; j++) {
                 ini=( int )sqrt((float)( (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])) );
                mini=(mini>ini ? ini : mini) ;
            }
        }


        printf("The minimum distance is : %d\n",mini) ;

    }





    return 0;
}

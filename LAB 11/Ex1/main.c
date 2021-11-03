#include <stdio.h>
#include <stdlib.h>


 struct coordinate {

    int x,y ;

};



int main(int argc , char* argv[])
{


        struct coordinate p[4] ;
        int i=0 ;
        for (i=0 ; i<4; i++) {
            scanf("%d %d",&p[i].x,&p[i].y) ;
        }

    int Path=0 ;

    if (argv[1][1]=='m')
       { //int Path=0 ;
        for (i=0; i<3 ; i++) {
                Path+=(int )sqrt((float)( (p[i].x-p[i+1].x)*(p[i].x-p[i+1].x)+(p[i].y-p[i+1].y)*(p[i].y-p[i+1].y)) );

            }
        printf("Path is %d\n",Path) ;

       }
        else if (argv[1][1]=='a') {


                    int mini=Path ;
        int ini;
        int j;
        for (i=0; i<3 ; i++) {
            for (j=i+1 ; j<4; j++) {
                 ini=( int )sqrt((float)( (p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y)) );
                mini=(mini>ini ? ini : mini) ;
            }
        }


        printf("The minimum distance is : %d\n",mini) ;


        }

    return 0;
}

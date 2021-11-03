/*// EX1


#include <stdio.h>
#include <stdlib.h>
#define DIM 15



int main()
{

    int arr[DIM] ;
    int i =0 , k=0 , j =0 , pos_cur=0 , pos_max=0 , count_cur=0 , count_max=1;


    for (i=0 ; i<DIM ; i++) {
        scanf("%d", &arr[i]);
    }


    for (i=0 ; i<DIM ; i++) {

        pos_cur=i ;
        count_cur=1 ;

        for ( j =pos_cur ; j<DIM-1  ; j++) {
            if (arr[j+1]>arr[j] ) ++count_cur;
            else   {
                    if (count_cur>=count_max) {
                pos_max=pos_cur ;
                count_max=count_cur ;}
                break ;
            }

        }

    }

    for (i=pos_max ; i<pos_max+count_max ; i++) {
        printf("%d ",arr[i]) ;
    }



    return 0;
}
*/


/*
//EX2

#include <stdio.h>
#include <stdlib.h>
#define DIM 100


int main()
{

    int arr[DIM] ;
    int i =0 , k=0 , j =0 , pos_cur=0 , pos_max=0 , count_cur=0 , count_max=1;
    int N1, N2 ;
    scanf("%d %d" , &N1, &N2) ;
    if (N1>DIM || N2>DIM) {
        printf("error!\n") ;
        exit(0) ;
    }

    int v1[DIM] ;
    float v2[DIM] ;
    for (i=0; i<N1 ; i++) {
        scanf("%d",&v1[i]) ;
    }

    float sum=0 ;
    float count=0 ;
    for (i=0 ; i<N1; i++) {
        sum=0 ;
        count=0 ;
        for (j=i-N2 ; j<=i+N2 ; j++) {
            if (j>=0 && j<N1) {
                sum+=v1[j] ;
                count++ ;
            }
        }
        v2[i] =(float)sum/(float)count ;
        printf("%.2f ",v2[i]) ;
    }




    return 0;
}



*/



//EX3
/*
#include <stdio.h>
#include <stdlib.h>
#define DIM 100
#define R 3
#define C 5

int fact (int a) {
int mu=1,i=1 ;
for (i=2; i<=a ; i++) {
    mu*=i;
}
return mu ;

}

int  sma10 (int a) {
int i=0;
int count=0 ;
while(a!=0) {
    a=a/10 ;
    count++ ;
}

int s=1 ;
for (i=0 ; i<count ; i++){
    s*=10 ;
}
return s;


}



int main()
{


    int m1[R][C] ;
    int m2 [R][C] ;
    int i , j ;
    for (i=0 ; i <R ; i++) {
        for (j=0 ; j<C ; j++) {
            scanf("%d",&m1[i][j]) ;
        if (m1[i][j]== 0) m2[i][j]=0 ;
        else if (m1[i][j]<0) {
            m2[i][j]=fact(-1*m1[i][j]) ;
        }
        else {
                m2[i][j]=sma10(m1[i][j]) ;
        }

        }

    }






 for (i=0 ; i<R; i++){

    for (j=0 ; j<C; j++) {
        printf("%d " ,m2[i][j]) ;
    }
    puts("") ;
 }





    return 0;
}
*/




#include <stdio.h>
#include <stdlib.h>
#define DIM 100
#define MAX_DIM 100


int main()
{


    int m1[MAX_DIM][MAX_DIM] ,m2[MAX_DIM][MAX_DIM],m3[MAX_DIM][MAX_DIM] ;

    int r1,c1,r2,c2,r3,c3 ;
    scanf ("%d %d %d %d",&r1,&c1,&r2,&c2) ;

    if (r1>MAX_DIM || c1>MAX_DIM || r2>MAX_DIM || c2>MAX_DIM || c1!=r2) {exit(0) ;}

    int i ,j ,k,s ;
    for (i=0 ; i<r1 ; i++) {
        for (j=0; j<c1 ;j++) {
            scanf("%d",&m1[i][j]) ;
        }
    }


    for (i=0 ; i<r2 ; i++) {
        for (j=0; j<c2 ;j++) {
            scanf("%d",&m2[i][j]) ;
        }
    }


    r3=r1 ;
    c3=c2 ;
    int sum=0 ;
    for (i=0 ; i<r3; i++) {
        for (j=0 ; j<c3 ; j++) {


          // matrixlerin hasilin tap !
            sum=0 ;
            for (k=0 ; k<c1 ; k++) {
                    sum=sum+m1[i][k]*m2[k][j] ;
            }

        m3[i][j]=sum ;
        printf("%d ",m3[i][j]) ;

        }
        puts("") ;
    }







    return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10

float avgVect ( int v[], int n ) ;
int upperLimit (int v[], int n , float limit) ;
float over_Avg(int v[], int n, int* greater);
int main()
{




    int vect[N] ;
    int i , j  ;
    for(i=0 ; i<N; i++) {
        scanf("%d",&vect[i]) ;
    }
    float limit ;
    printf ("Enter the limit : ") ;
    scanf ("%f", &limit);
    printf ("Average is %f  \n number of elements greater than limit is :%d" , avgVect(vect , N) ,upperLimit(vect , N ,limit )) ;

        puts("") ;
    int limc=0 ;

    float aaa=over_Avg(vect , N , &limc) ;
    printf ("Average is %f  \n number of elements greater than AVERAGE is :%d" , over_Avg(vect , N , &limc) ,limc) ;



    return 0;
}



float avgVect ( int v[], int n ) {

     float sum  =  0.0 ;
     int i ;
     for (i =0 ; i<n ; i++) {
        sum+=(float)v[i] ;
     }

     sum/=n ;
     return sum ;



}
int upperLimit(int v[], int n , float limit ) {

    int i,count=0 ;
    int lim = (int ) (floor(limit)) ;
    for (i=0 ; i<n  ; i++) {
        if (v[i]>lim) count++ ;

    }


    return count ;


}
float over_Avg(int v[], int n, int* greater){

        float avg=avgVect(v , n ) ;


        int lim=upperLimit(v,n,avg) ;
        *greater = lim ;

      //  printf( "\n funksiyaya girdim ve  avf : %f   ve lim  : %d\n" , avg , *greater) ;

    return (avg) ;


}

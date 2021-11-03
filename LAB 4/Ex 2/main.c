#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a ;
    int day , month , year ;
    printf ("Enter date in formar **/**/**** \n") ;
    scanf("%d/%d/%d" ,&day, &month , &year) ;

    printf( "%d " , day) ;

    //printf ("Enter the number of month: \n") ;
    //scanf("%d",&a ) ;
    switch(month) {

    case 1 :
        printf("Janruary") ;
        break ;
    case 2 :
        printf("February") ;
        break ;
    case 3 :
        printf("March") ;
        break ;
    case 4 :
        printf("April") ;
        break ;
    case 5 :
        printf("May") ;
        break ;
    case 6 :
        printf("June") ;
        break ;
    case 7 :
        printf("July") ;
        break ;
     case 8 :
        printf("August") ;
        break ;
     case 9 :
        printf("September") ;
        break ;
     case 10 :
        printf("October") ;
        break ;
     case 11 :
        printf("November") ;
        break ;
     case 12 :
        printf("December") ;
        break ;
     default :
        printf("ERROR! \n CLosing The Program.... \n");
        break ;
    }

    printf (" %d\n", year) ;


    return 0;
}

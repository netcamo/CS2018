#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct way {
char dep_sta[21] ;
char dep_time[21] ;
char des_sta[21] ;
char arr_time[21] ;

};

int main(int argc, char *argv[])
{

    FILE* fin=fopen(argv[1], "r" ) ;

    if (fin!=NULL) puts("SUCCESS!") ;
    char str[100] ;
    struct way ways[1000] ;
    int i=0 , j, count=0 ;
    while (fgets(str , 100 ,fin)!=NULL) {
        sscanf( str,  "%s %s %s %s" , &ways[i].dep_sta , &ways[i].dep_time , &ways[i].des_sta , &ways[i].arr_time) ;
        i++ ;
        count++ ;
    }

    int count_arrive =0 , count_depart=0 ;

    for (i=0 ; i<count ; i++) {
        if (strcmp(argv[2],ways[i].dep_sta)==0) count_depart++ ;
        if (strcmp ( argv[2], ways[i].des_sta)==0) count_arrive++ ;
    }



    printf(" NUmber of  departing trains from %s : %d \n Number of arriving trains to %s : %d \n" , argv[2] , count_depart , argv[2],count_arrive) ;

    return 0;
}

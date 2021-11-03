#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct athlet {

char name[50] ;
int score ;


}Athlet;


int main()
{

    FILE* fin=fopen("contest.txt" ,"r") ;
    if (fin!=NULL) puts("SUCCESS") ;
    Athlet athlets[100] ;
   // puts("YE") ;
    char str[200] ;
    int count=0 , i=0 , j=0 ;

    while ( fgets(str , 200 , fin)!=NULL) {
            //puts("YE") ;
            sscanf(str ,"%s %d" , &athlets[i].name , &athlets[i].score) ;
            i++;
            count++ ;
           // printf ("%s %d\n", athlets[i-1].name , athlets[i-1].score) ;


    }

    Athlet temp;

    for (i=0 ; i<count ; i++) {
        for(j=0 ; j<count-1; j++) {
            if(strcmp(athlets[j].name , athlets[j+1].name)>0)  {
                temp.score=athlets[j].score ;
                athlets[j].score = athlets[j+1].score ;
                athlets[j+1].score=temp.score ;
                strcpy(temp.name,athlets[j].name) ;
                strcpy(athlets[j].name , athlets[j+1].name) ;
                strcpy(athlets[j+1].name,temp.name) ;


            }
        }
    }
    FILE* fout=fopen("contest_ord.txt ", "w");


    for (i=0 ; i<count ; i++) {
        fprintf(fout , "%s %d \n", athlets[i].name , athlets[i].score ) ;



    }

    Athlet best[3] ;
    best[0].score =150 ;
    best[1].score = 0 ;
    best[2].score =0 ;
    best[3].score = 0 ;
    for (i =1 ; i<4; i++) {

        for (j=0 ; j<count; j++) {
            if ( athlets[j].score > best[i].score &&  athlets[j].score < best[i-1].score ) {

                best[i].score =athlets[j].score ;
                strcpy(best[i].name,athlets[j].name) ;

            }
        }
        printf ("%d place is : %s %d\n" , i , best[i].name , best[i].score) ;

    }



    fclose(fin) ;
    fclose(fout) ;







    return 0;
}

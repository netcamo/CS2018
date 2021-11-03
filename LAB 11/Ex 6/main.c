#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct student {

char name[20] ;
char id[20] ;
int score ;

}Student;



int main()
{
    int i=0 , j , count=0 ;
    Student students [1000] ;
    char menu ;
    char ztr[100] ;
    char str[100] ;
    Student tmp ;
    while (gets(str))
     {
         //sscanf(ztr , "%c %s" , &menu , &str) ;
            menu = str[0] ;
            if (menu=='I') {
                 //   puts("III") ;
                // gets(str) ;
              //   puts("I gets : ") ;
              //  printf ("%s\n",str) ;
                   sscanf(str , "%c %s %s %d"  ,&menu, &tmp.name , &tmp.id , &tmp.score ) ;
                    students[count].score=tmp.score;
                    strcpy(students[count].id , tmp.id) ;
                    strcpy(students[count].name ,tmp.name) ;
                                   count++ ;


            }

            else if (menu== 'D') {

                //gets (str) ;
                sscanf(str , "%c %s",&menu , &ztr ) ;
             //   printf("\nztr is :%s:\n",ztr) ;
                int is_id=0;
                for (i = 0 ;i<strlen(ztr) ; i++) {
                    if (!isalpha(ztr[i])) is_id=1 ;
                }
                if (is_id ==0) {
                    int place ;
                    for (i=0 ; i<count ; i++) {
                        if (strcmp(students[i].name,ztr)==0) {
                            place=i;
                            break ;
                        }
                    }
                   // printf ("\nplace is:%d:\n",place) ;


                    for (i=place ; i<count-1 ; i++) {
                        strcpy(students[i].name , students[i+1].name) ;
                        strcpy(students[i].id , students[i+1].id) ;
                        students[i].score=students[i+1].score ;
                    }
                    count-- ;



                }
                else {
                   int place ;
                    for (i=0 ; i<count ; i++) {
                        if (strcmp(students[i].id,ztr)==0) {
                            place=i;
                            break ;
                        }
                    }
                   // printf ("\nplace is:%d:\n",place) ;


                    for (i=place ; i<count-1 ; i++) {
                        strcpy(students[i].name , students[i+1].name) ;
                        strcpy(students[i].id , students[i+1].id) ;
                        students[i].score=students[i+1].score ;
                    }
                    count-- ;



                }





            }


            else if (menu=='P') {
                   // puts("PPP") ;
                for (i=0 ; i<count ; i++) {
                    printf("%s %s %d\n" ,students[i].name , students[i].id , students[i].score);
                }

            }

            else if (menu=='V') {

                sscanf(str , "%c %s",&menu , &ztr ) ;
             //   printf("\nztr is :%s:\n",ztr) ;
                int is_id=0;
                for (i = 0 ;i<strlen(ztr) ; i++) {
                    if (!isalpha(ztr[i])) is_id=1 ;
                }
                if (is_id ==0)
                {
                     for (i=0 ; i<count ; i++) {
                        if (strcmp(students[i].name,ztr)==0) {
                            printf ("\n%s %s %d\n", students[i].name , students[i].id ,students[i].score) ;
                            break ;
                        }
                    }


                }
                else {
                    for (i=0 ; i<count ; i++) {
                        if (strcmp(students[i].id,ztr)==0) {
                            printf ("\n%s %s %d\n", students[i].name , students[i].id ,students[i].score) ;
                            break ;
                        }
                    }
                }


            }

        else if (menu=='L')
        {
            sscanf(str, "%c %s",&menu, &ztr ) ;
            FILE *fin=fopen(ztr,"r") ;
            while(fgets(str, 200, fin)!=NULL)
            {
                sscanf(str,"%s %s %d",&students[count].name, &students[count].id, &students[count].score) ;
                count++;
            }
            fclose (fin) ;
        }
        else if (menu=='S') {
            sscanf(str, "%c %s",&menu, &ztr ) ;
            FILE *fin=fopen(ztr,"w") ;
            for (i =0 ; i<count ; i++) {
                fprintf(fin , "%s %s %d\n",students[i].name , students[i].id , students[i].score) ;
            }
            fclose (fin) ;
        }





       // puts("sikl bitdi") ;
     }








    return 0;
}

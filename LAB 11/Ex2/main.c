#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct names {
char name[20]; /*Name*/
char surname[20]; /*Surname*/
char number[20]; /*Phone Number*/
char mobile[20]; /*Mobile Number*/
} Names;




int main(int argc , char* argv[])
{



        printf ("\t1) Add contact \n\t2) Print all list \n\t3) Exit \n" ) ;
        int m ,i,j ;
        Names book[100] ;
        int count=0 ;

        while (scanf("%d",&m) )  {




        if (m==3) {
            return 0 ;
        }
        else if (m==1 ) {


                char name[20],surname[20],number[20],mobile[20] ;
                scanf("%s %s %s %s",&name ,&surname , & number ,&mobile)  ;
                if (count==0) {
                    strcpy(book[0].name,name) ;

                    strcpy(book[0].surname,surname) ;

                    strcpy(book[0].number,number) ;

                    strcpy(book[0].mobile,mobile) ;
                    count++;
                }
                else {
                        int flag=0 ;
                    for (i=0; i<count ; i++ ) {

                        if ( strcmp(book[i].name ,name) ==strcmp(book[i].surname ,surname) && strcmp(book[i].number ,number)==0 &&strcmp(book[i].mobile ,mobile)==0 &&strcmp(book[i].name ,name)==0   )
                         {
                             flag=1 ;
                                break ;
                         }
                    }


                    if (flag==1) {
                        int t;
                        puts("input 1 if you want to add duplicate!");
                        scanf("%d",&t) ;
                        if (t==1)
                            {
                            strcpy(book[count].name,name) ;

                    strcpy(book[count].surname,surname) ;

                    strcpy(book[count].number,number) ;

                    strcpy(book[count].mobile,mobile) ;
                    count++;
                        puts("added!") ;
                        }
                        else{
                            puts("it is not added!") ;
                        }

                    }
                    else if (flag==0) {
                          strcpy(book[count].name,name) ;

                    strcpy(book[count].surname,surname) ;

                    strcpy(book[count].number,number) ;

                    strcpy(book[count].mobile,mobile) ;
                    count++;
                    puts("OK!") ;

                    }


                }



        }

        else if (m==2) {
            for (i=0 ; i<count; i++) {

                printf("%s %s %s %s \n",book[i].name , book[i].surname , book[i].number , book[i].mobile) ;
            }
        }

        }



    return 0 ;

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{


    char s[100] ;

    int i,j,n,price ;
    char name[100];
    char names[3][100] ;
    int prices[3] ;
    for (i=0 ; i<3 ; i++)
    {
        gets(s) ;
        sscanf(s,"%s %d",&name, &price) ;
        prices[i]=price ;
        //printf("******%s %d **** \n",name,price) ;
        strcpy(names[i],name);
        //printf ("\n -----  %s    %d  ------\n",names[i],prices[i]);
    }
    int flag=0 ;
    do { gets(s) ;
        sscanf(s,"%s %d",&name, &price) ;
    for (i =0 ; i<3; i++) {
        if (strcmp(name, names[i]) == 0) {
         flag=1 ;
         printf(" The total price is : %d" , prices[i]*price)   ;
         break ;
        }
            if (i==2) {
                puts("Please enter correct name and quantity!") ;
            }
    }



    } while (flag==0) ;


       return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct subjects {

char subject[21] ;
char prof_name[21] ;
char prof_surname[21] ;
int period ;
int credit ;
float pass_rate ;

} Subjects;


int main( int argc  , char *argv[])
{
    FILE *fin=fopen(argv[1] , "r") ;

    if (fin!=NULL) {
        puts("SUCCESSFUL OPENING FILE ") ;
    }

char str[200] ;


Subjects subs[100] ;
int count =0 ;
int i=0 , j ;

int max_credit= 0;

while (fgets(str,200,fin)!=NULL) {

        sscanf(str , "%s %s %s %d %d %f" , &subs[i].subject , &subs[i].prof_name , &subs[i].prof_surname , &subs[i].period , &subs[i].credit , &subs[i].pass_rate) ;
        if (max_credit< subs[i].credit)  max_credit = subs[i].credit ;
        i++ ;
        count++ ;
}
puts("List of all subjects that give maximum credits :");

for (i= 0; i< count ; i++) {

    if (subs[i].credit==max_credit ) printf("%s : %d  credits\n" ,subs[i].subject,max_credit) ;


}

for (i=1 ; i<=4; i++ ) {

     printf("The subject list  that is most difficult to pass in  period %d is :\n",i) ;
     float most_difficult=0 ;
     for (j=0 ; j<count ; j++) {
        if (subs[j].period == i && most_difficult < subs[j].pass_rate ) most_difficult=subs[j].pass_rate ;
     }
     for (j=0 ; j<count; j ++) {
            if (subs[j].pass_rate==most_difficult)
        printf ("%s : %f pass_rate\n",subs[j].subject, most_difficult) ;
     }


}


puts("Enter name of Professor :") ;
char prof[21] ;
scanf("%s",&prof) ;

float pass=0.0 ;
int sum=0 ;
int num= 0;
for (i=0 ; i< count ; i++) {

    if (strcmp(prof , subs[i].prof_surname)==0) {
        pass+=subs[i].pass_rate;
        num++;
        sum+=subs[i].credit ;
    }


}

pass/=num ;
printf (" sum of credits taught by prof : %d \n average pass rate : %.2f" ,sum , pass ) ;



fclose(fin) ;



    return 0;
}

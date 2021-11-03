#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int check (char s[]) {
 int n = strlen(s) ;
 if (n!=5) return 0 ;
 int i  ;
 for (i =0 ; i<n ; i++) {
    if (i==2 && s[i]!=':') return 0 ;
    else if ( i!=2 && !isdigit(s[i])) return  0 ;

 }

 return 1 ;
 }

int main()
{
        char s1[100] ,s2[100];
        scanf("%s %s",&s1,&s2) ;
        if (check(s1)==0||check(s2)==0) {
            printf ("It is wrong!\n");
            return 0 ;
        }

        int hour1 , minute1 ,hour2 , minute2;
        hour1 = ((int)s1[0]-48) *10 + ( (int)s1[1]-48) ;

        hour2 = ((int)s2[0]-48) *10 + ( (int)s2[1]-48) ;
        minute1 =  ( (int)s1[3]-48)*10 + ( (int)s1[4]-48) ;
        minute2 =  ( (int)s2[3]-48)*10 + ( (int)s2[4]-48) ;
          //      printf ("%d : %d \n %d : %d" , hour1, minute1 , hour2 , minute2)  ;
            int time1 , time2 ;
            time1=hour1*60+minute1;
            time2 = hour2*60+minute2 ;
            if (time1>time2)
            {
                int time= time1-time2 ;
                printf("%d : %d",time/60 , time%60) ;

            }

    return 0;
}

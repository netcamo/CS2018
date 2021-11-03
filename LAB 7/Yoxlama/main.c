#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *eliminate(char str1[], char str2[])

{

   int i, j, k;



   for(i=j=0;str1[i]!= '\0';i++)

   {

      for(k=0;str2[k] && str1[i]!=str2[k];k++);

      if(str2[k]== '\0')

         str1[j++]=str1[i];

   }

   str1[j]='\0';

   return str1;

}


int main()
{

        char s[20] ="GguesswhatIsit";
        char v[20]="Gies" ;

        eliminate(s,v) ;
        printf("%s",s) ;


       return 0;
}

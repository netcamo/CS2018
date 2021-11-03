#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROW 5
#define COL 11



/*

 **.*.*....*
 ..*.*...**.
 *.....*....
 .*.*.*.*.*.
 ..*.*...*.*
*/



int main()
{
  // INPUT WITH SPACES IN EVERY ROWS BEGINNING!!!!!!

    char swp [ROW+1][COL+1]=
    {
        "       ",
        " **.*.*....*",
        " ..*.*...**.",
        " *.....*....",
        " .*.*.*.*.*.",
        " ..*.*...*.*"

    } ;

    char z[ROW+1][COL+1] ;
    char s[200] ;
    int q=1 ;
    while(gets(s)!=NULL) {
        strcpy(z[q++] ,s ) ;
    }
//    int y=0;
   // for (y=1 ; y<q; y++) {
  //      printf("%s\n",z[y]);
   // }



  //  return 0 ;


    int dp[ROW+2][COL+2];
    int i,j  ;
    for (i =0 ; i<=ROW+1 ; i++)
    {
        for (j=0 ; j<=COL+1; j++ )
        {
            dp[i][j]=0;
        }


    }


    for (i=1; i<=ROW; i++)
    {
        if (z[i][1]=='*') dp[i][1]=1;

    }
    for (j=2 ; j<=COL ; j++)
    {
        for (i=1; i<=ROW ; i++)
        {
            if (z[i][j]=='*')
            {
                if (i==1)
                {
                    if(dp[i][j-1]==1||dp[i+1][j-1]==1)dp[i][j]=1 ;
                }
                else if (i==ROW)
                {
                    if(dp[i-1][j-1]==1||dp[i][j-1]==1)dp[i][j]=1 ;
                }
                else
                {
                    if(dp[i][j-1]==1||dp[i+1][j-1]==1||dp[i-1][j-1])dp[i][j]=1 ;

                }



            }
        }
    }
    int flag=0 ;
    int rowway=0;
    for (i=1 ; i<=ROW ; i++)
    {
        if (dp[i][COL]==1)
        {
            flag=1 ;
            rowway=i ;
        }
    }
    if (flag==0)
    {
        printf ("There is no place to go!....\n") ;
    }

    i=rowway ;
    j=COL ;

    int k=0 ;

    int way[26] ;
    while (j!=0)
    {
        way[k++]=i ;

        j-- ;
        i= ( dp[i][j] ==0 ? ( dp [ i-1] [ j] ==1 ? i-1 : i+1 ) :i ) ;
    }
    puts("") ;
    for (i =k-1; i>=0 ; i-- ) {
        printf(" %d ",way[i]-1);
    }

    puts("");

   /* for (i=1 ; i<=ROW ; i++) {
        for (j=1 ; j<=COL ; j++) {
            printf (" %c ",z[i][j]);
        }
        puts("");
    }

    puts("");
    puts("") ;

    for (i=1; i<=ROW+1 ; i++) {
        for (j=1 ; j<=COL+1 ; j++) {
            printf (" %d ",dp[i][j]);
        }
        puts("");
    }
*/
    return 0;
}

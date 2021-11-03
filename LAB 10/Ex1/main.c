#include <stdio.h>
#include <stdlib.h>

int main(int argc , char* argv[])
{
    int a,b ;
    if (argc!=3) {
        puts("not enough arguments!") ;
        exit(1) ;
    }
    else {
       sscanf(argv[1], "%d",&a) ;
        sscanf(argv[2],"%d",&b) ;
        a=a+b ;
        printf("%d\n",a) ;



    }



    return 0;
}

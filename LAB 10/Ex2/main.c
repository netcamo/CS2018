#include <stdio.h>
#include <stdlib.h>


int _CRT_glob = 0;


int main(   int argc , char* argv[])
{
    int a,b ;
    char c ;
    if(argc!=4) {
        puts("Wrong input!") ;
        exit(1) ;
    }


    if (sscanf(argv[1], "%d",&a)!=1) {
        exit(1) ;
    }
    if (sscanf(argv[2],"%d",&b)!=1) {exit(1);}
    switch (argv[3][0]) {
        case '+' : {printf("%d\n",a+b) ;
                    break ;
        }
        case '-' :{printf("%d\n",a-b) ;
                break ;
        }
        case '*' :{printf("%d\n",a*b) ; break;
        }
        case '/' :{if (b!=0)printf("%d",a/b) ;
                    else exit(1) ;
                    break ;
        }
        default: break ;


    }




    return 0;
}

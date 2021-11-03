#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c ;
    printf (" Enter coefficient a b c :\n") ;
    scanf("%f %f %f",&a,&b,&c);

    float disc = (b*b-4*a*c);
    if(disc>0.0){

        printf("The equation has two REAL distinct roots\n");
    }
    else if(disc==0.0){
        printf("The equation has two REAL coincident roots\n");
    }
    else{

        printf("The equation has NO REAL roots\n");
    }



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{

      float V_out;
      printf ( " enter the  voltage from sensor :  ") ;
      scanf  ("%f", &V_out ) ;
     // printf("%f",V_out) ;
      float   Temperature=0  ;
      if (V_out <=15.0 && V_out>= 0.0)
       {
           Temperature = (3.0/4.0)*V_out ;


       }
       else if (V_out<=27) {
        Temperature  =(V_out+95.0/4.0)/(35.0/12.0) ;
       }
       else {
        Temperature =(V_out+775.0/8.0) / (45.0/8.0) ;
       }
       printf("Temperatur is : %.2f " , Temperature ) ;



    return 0;
}

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #define N 10
    #define M 10
    int insert_product(char warehouse[][M], float price[], int n, char new_product[], float price_new_product);
    void print_all(char warehouse[][M], float price[], int n,  float *avg, float *max);


    int main()
    {

        char warehouse[N][M] ;
        float price[N] ;
        int i ;
        for (i=0 ; i<N; i++) price[i]=-1 ;

        int  n=0 ;
        char s[10] ;
        while (1)
        {
            //printf("1. Insertion of a new product and the associated price\n2. Print the current list (a table with product names and prices)\n3. Exit the program.\nEnter mode!:\n");
            gets(s) ;
            if (s[0]=='1')
            {
                gets(s) ;
                float p ;
                char w[M] ;

                sscanf(s, "%s %f",w, &p) ;
                int flag=insert_product(warehouse, price,N, w,p);
                if (flag==1)
                {
                    printf("inserted  : %s %f\n\n",w,p ) ;
                }
                else if (flag==2)
                {
                    printf("List is full! \n") ;
                }
                else if (flag==0)
                {
                    printf("It is already there : %s %f\n\n", w, p) ;
                }


            }
            else if (s[0]=='2')
            {

                    float avg ;
                    float max ;
                print_all(warehouse , price , N ,&avg ,&max) ;
                printf ("\n AVerage is :%f \n Max is : %f \n" ,avg, max);



            }
            else if (s[0]=='3')
            {



            }





        }



        return 0;
    }


    void print_all(char warehouse[][M], float price[], int n,  float *avg, float *max)
    {

        *avg=0;
        *max=0 ;

        int i ;
            for ( i=0 ; i< n  && price[i]!=-1 ; i++) {
                printf("%s %f \n", warehouse[i] , price[i]) ;
                *avg+=price[i] ;
                *max=(price[i]>*max ? price[i] : *max) ;

            }
            *avg/=i ;

    }






    int insert_product(char warehouse[][M], float price[], int n, char new_product[], float price_new_product)
    {

        if (price[n-1]!=-1) return 2 ;
        else
        {
            int i ;
            int flag= 0;
            for (i=0 ; i< n && price[i]!=-1; i++)
            {
                if (strcmp(new_product,warehouse[i])==0)
                {

                    return 0;
                }

            }

            for (i=0 ; i<n ; i++ )
            {
                if (price[i]==-1) break ;
            }
            strcpy(warehouse[i], new_product) ;

            price[i]=price_new_product ;
           // printf( "\n ---- inserted : %s  %f -----\n" ,warehouse[i],price[i]);

            return 1 ;


        }

    }


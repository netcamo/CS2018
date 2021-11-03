#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100000

int MAXSIZE = MAX;
char stack[MAX];
int top = -1;

int isempty()
{

    if(top == -1)
        return 1;
    else
        return 0;
}

int isfull()
{

    if(top == MAXSIZE)
        return 1;
    else
        return 0;
}

int peek()
{
    return stack[top];
}

char pop()
{
    char data;

    if(!isempty())
    {
        data = stack[top];
        top = top - 1;
        return data;
    }
    else
    {
        printf("Could not retrieve data, Stack is empty.\n");
    }
}

int push(char data)
{

    if(!isfull())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
    {
        printf("Could not insert data, Stack is full.\n");
    }
}








void prepend(char* s, const char* t , int len)
{

    size_t i;

    memmove(s + len, s, strlen(s) + 1);

    for (i = 0; i < len; ++i)
    {
        s[i] = t[i];
    }
}


void reverseStr(char* str , int n)
{




    // Swap character starting from two
    // corners
    char c ;
    int i;
    for ( i = 0; i < n / 2; i++) {

        c=str[i] ;
        str[i]=str[n-i-1] ;
        str[n-i-1]=c;
    }
}





int main()
{

    char  str [1024] [1025] ;

    char FLAG[10000] ;
    int size_flag=0 ;




    int i, j ;

    for (i=0 ; i<10000 ; i ++) FLAG[i]='_' ;


    char c;
    int cur_i, cur_j ;
    char temp ;
    int number ;
    for (i= 0 ; i<1024 ; i++)
    {
        for ( j =0 ; j<1025 ; j++)
        {

            c=str[i][j] ;

            if (c=='$')
            {



                while (c!='@')
                {


                    c=str[i][j] ;
                    if (c!='#')
                    {

                        if (c=='(')
                        {

                            temp=pop() ;

                            //prepend temp to string FLAG
                            prepend(FLAG, temp ,size_flag) ;
                            size_flag++ ;
                            //

                            cur_i = i ;
                            cur_j=j ;
                            number=0;
                            for(j=j+1 ; j<1025; j++)
                            {
                                if (str[i][j]<='9'&& str>='0' )
                                {
                                    number=number*10+atoi(str[i][j]) ;
                                }
                                else break ;
                            }

                            j=cur_j - number ;


                        }
                        else if (c==')')
                        {
                            temp=pop() ;

                            //append temp to string FLAG
                            FLAG[size_flag]=temp ;
                            size_flag++ ;
                            //

                            cur_i = i ;
                            cur_j=j ;
                            number=0;
                            for(j=j-1 ; j>=0; j--)
                            {
                                if (str[i][j]<='9'&& str[i][j]>='0' )
                                {
                                    number=number*10+atoi(str[i][j]) ;
                                }
                                else break ;
                            }
                            j=cur_j+number ;

                        }

                        else if (c=='-')
                        {
                            //remove the first  char  of FLAG string
                               int k=0 ;
                               for (k=0 ; k<size_flag ; k++) {
                                 FLAG[k]=FLAG[k+1] ;
                               }
                               size_flag-- ;

                                //
                            cur_i = i ;
                            cur_j=j ;
                            number=0;
                            for(i=i+1 ; i<1024; i++)
                            {
                                if (str[i][j]<='9'&& str[i][j]>='0' )
                                {
                                    number=number*10+atoi(str[i][j]) ;
                                }
                                else break ;
                            }
                            i=cur_i-number ;
                        }

                        else if (c=='+')
                        {

                            //remove the last  char  of FLAG string
                                size_flag-- ;
                            cur_i = i ;
                            cur_j=j ;
                            number=0;
                            for(i=i-1 ; i>=0; i--)
                            {
                                if (str[i][j]<='9'&& str[i][j]>='0' )
                                {
                                    number=number*10+atoi(str[i][j]) ;
                                }
                                else break ;
                            }
                            i=cur_i+number ;

                        }

                        else if (c=='%')
                        {
                            // reverse the FLAG string
                            reverseStr(FLAG , size_flag) ;

                            //



                            i++ ;
                        }
                        else if (c=='[')
                        {

                            push(str[i][j+1]) ;
                            j+=2 ;
                        }
                        else if (c==']')
                        {
                            push(str[i][j-1]) ;
                            j-=2 ;

                        }

                        else if (c=='*')
                        {
                            push(str[i-1][j]) ;
                            i-=2 ;

                        }

                        else if (c=='.')
                        {
                            push(str[i+1][j]) ;
                            i+=2 ;

                        }

                        if (c=='<')
                        {
                            cur_i = i ;
                            cur_j=j ;
                            number=0;
                            for(j=j+1 ; j<1025; j++)
                            {
                                if (str[i][j]<='9'&& str>='0' )
                                {
                                    number=number*10+atoi(str[i][j]) ;
                                }
                                else break ;
                            }

                            j=cur_j - number ;
                        }

                        else if (c=='>')
                        {

                            cur_i = i ;
                            cur_j=j ;
                            number=0;
                            for(j=j-1 ; j>=0; j--)
                            {
                                if (str[i][j]<='9'&& str[i][j]>='0' )
                                {
                                    number=number*10+atoi(str[i][j]) ;
                                }
                                else break ;
                            }
                            j=cur_j+number ;

                        }

                        else if (c=='^')
                        {

                            cur_i = i ;
                            cur_j=j ;
                            number=0;
                            for(i=i+1 ; i<1024; i++)
                            {
                                if (str[i][j]<='9'&& str[i][j]>='0' )
                                {
                                    number=number*10+atoi(str[i][j]) ;
                                }
                                else break ;
                            }
                            i=cur_i-number ;

                        }


                        else if (c=='+')
                        {


                            cur_i = i ;
                            cur_j=j ;
                            number=0;
                            for(i=i-1 ; i>=0; i--)
                            {
                                if (str[i][j]<='9'&& str[i][j]>='0' )
                                {
                                    number=number*10+atoi(str[i][j]) ;
                                }
                                else break ;
                            }
                            i=cur_i+number ;

                        }

                    }
                    else i++ ;

                }

                return 0 ;
            }

        }

    }

    return 0;
}

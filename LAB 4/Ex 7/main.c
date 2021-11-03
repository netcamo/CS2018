#include <stdio.h>
#include <stdlib.h>

int main()
{
    // only c)
    int a;
    long b; // in some machines (32-bit), long is the same size as int, try to use a 64bit compiler
    unsigned c;

    // for int, increase to get the max, decrease to get min
    a = 0;
    while (a+1 > a) a++;
    printf("int max=%d in hex %X\n", a, a);

    a = 0;
    while (a-1 < a) a--;
    printf("int min=%d in hex %X\n", a, a);

    // The same with long, but takes much longer
    b = 0;
    while (b+1 > b) b++;
    printf("long max=%d in hex %X\n", b, b);

    b = 0;
    while (b-1 < b) b--;
    printf("long min=%d in hex %X\n", b, b);

    c = 0;
    while (c+1 != 0) c++;
    printf("unsigned max=%u in hex %X\n", c, c);


    return 0;
}

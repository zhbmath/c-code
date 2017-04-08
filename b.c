#include <stdio.h>

static int (*p)(int, int);

static int add(int a, int b)
{
    return a+b ;
}

static int sub(int a, int b)
{
    return a-b ;
}

int result( int a, int b, char c )
{
    if ( c == '+' )  p = add;
    if ( c == '-' )  p = sub;

    return p(a,b) ;
}

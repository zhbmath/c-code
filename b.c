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

<<<<<<< HEAD
static int mul(int a, int b)
{
    return a*b ;
}

static int dvd(int a, int b)
{
    if(b==0) { puts("0 cannot be divsion"); exit(-1); }
    return (int)(a/b);
}

int result(int a, int b, char c)
{
    if (c == '+') p = add;
    if (c == '-') p = sub;
    if (c == '*') p = mul;
    if (c == '/') p = dvd;

    return p(a, b);
=======
int result( int a, int b, char c )
{
    if ( c == '+' )  { p = add; return p(a,b); };
    if ( c == '-' )  { p = sub; return p(a,b); };

    return 0;
>>>>>>> 4c0741adffa366a4f975b7551b52356ccd6bd3ab
}

#include <stdio.h>

extern int result(char, int, int);

int main()
{
    int a = result('-', 4, 9);
    printf("a = %d", a);
    return 0;
}

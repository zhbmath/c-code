#include <stdio.h>

extern int result(char, int, int);

int main()
{
    printf("result = %d", result('-', 4, 9) );
    return 0;
}

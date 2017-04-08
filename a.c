#include <stdio.h>

extern int result(int, int, char);

int main()
{
    printf("result = %d\n", result(4, 9, '-'));
    return 0;
}

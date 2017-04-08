#include <stdio.h>

extern int result(int, int, char);

int main()
{
    printf("result = %d", result(4, 9, '-'));
    return 0;
}

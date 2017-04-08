#include <stdio.h>
#include <stdlib.h>

extern int result(int, int, char);

int main()
{
    int a,b;
    char c;

    printf("a=");
    scanf("%d", &a);
    fflush(stdin);

    printf("b=");
    scanf("%d", &b);
    fflush(stdin);

    printf("c=");
    scanf("%c", &c);
    if ( c != 42 && c != 43 && c != 45 && c !=47 ) 
    { 
        printf("ilegal operator"); 
        exit(-1); 
    }
    fflush(stdin);

    printf("result=%d\n", result(a, b, c));

    return 0;
}

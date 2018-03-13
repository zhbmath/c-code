// C函数都是值传递，所谓地址传递也是靠传递指针的值来实现的

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void get_memory(char** p)
{
    *p = (char*)malloc(sizeof(char) * 100);
}

int main(void) 
{
    char*str = NULL;
    get_memory(&str);
    strcpy(str, "Hello World");
    printf("str = %s \n", str);
    return 0;
}

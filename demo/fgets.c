#include <stdio.h>
int main()
{
    char str[4];
    fgets(str, sizeof(str), stdin);
    printf("输入的字符为%s\n", str);
}
#include <stdio.h>

int main()
{
    int c = 10;
    int *point = &c;
    int val = *point;
    *point = 99;
    printf("改变后的c的值为%d", c);
}
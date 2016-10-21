#include <stdio.h>

int main()
{
    int  c = 10;
    /*
        获取变量c的指针地址 &运算符
    */
    int *point = &c;
    /*
        获取指针地址对应的值 *运算符
    */
    int val = *point;
    printf("指针是%p\n", &c);
    printf("指针对应的值是%d\n", val);
}
#include <stdio.h>
int main()
{
    /*
        指针输入字符串
    */
    char test[3];
    scanf("%s", test);
    printf("输入的字符串为:%2s\n", test);

    /*
        指针输入数字
    */
    int t;
    scanf("%i", &t);
    printf("输入的数字是%i\n", t);
}
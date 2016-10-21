#include <stdio.h>

void size(char str[])
{
    printf("传入的字符串是%s\n", str);

    /*
        如果函数参数申明为数组类型,他会被当做指针处理,因此sizeof得到的值是8(64为系统,sizeof(* int))
    */
    printf("字符串的长度是:%i\n", sizeof(str));
    char str_size[] = "this is demo";
    char * point = *str_size;

    /*
        sizeof直接传入数组依然计算的是数组的长度
    */
    printf("数组变量的长度是:%i\n", sizeof(str_size));

    printf("数组变量指针的长度是:%i\n", sizeof(point));

    /*
        数组变量可以用作指针
    */
    printf("数组的变量的地址是:%s\n", &str_size);

    /*
        数组变量指向数组的第一个值
    */
    printf("数组指针变量的地址是:%s\n", &point);
    *point = "test";
    printf("指针变量被赋值了吗?%s\n", point);
}
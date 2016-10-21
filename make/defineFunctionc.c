#include <stdio.h>
/*
    注意这里是双引号,且没有分号,文件在当前目录下,是相对路径,里面之定义了头信息(就是函数的返回值以及类型)
*/
#include "demo.h"

int main()
{
    /*
        调用未定义的函数,不报错(因为上面加载了函数头信息)
    */
    demo();
    puts("this is main function");

    return 0;
}

int demo()
{
    puts("this is demo function");
    return 0;
}
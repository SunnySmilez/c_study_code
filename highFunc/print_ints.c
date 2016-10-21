#include <stdio.h>
#include <stdarg.h>

void print_ints(int args, ...)
{
    /*
        保存传给函数的其他参数
    */
    va_list ap;

    /*
        表示可变参数从哪开始
    */
    va_start(ap, args);
    int i;
    /*
        循环遍历所有其他参数,args保存了参数的数目
    */
    for(i=0;i<args;i++) {
        printf("argument:%i\n", va_arg(ap, int));
    }

    va_end(ap);
}

int main()
{
    print_ints(3, 79, 101, 32);
}
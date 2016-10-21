#include <stdio.h>

int demo();

int main()
{
    demo();
    puts("this is main function");

    return 0;
}

int demo()
{
    puts("this is demo function");
    return 0;
}
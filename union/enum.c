#include <stdio.h>

int main()
{
    typedef enum  {red, blue} color;

    color a = red;
    printf("%u", a);
    return 0;
}
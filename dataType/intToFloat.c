#include <stdio.h>

int main()
{
    int x = 7;
    int y = 2;
    float z = x/y;
    printf("最后的结果是:%f\n", z);

    float a = (float) x/y;
    printf("最后的结果是:%f\n", a);
}
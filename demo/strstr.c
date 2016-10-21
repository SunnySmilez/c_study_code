#include <stdio.h>
#include <string.h>
int main()
{
    char test[] = "this is test";
    if (strstr(test, "test")) {
        puts("我找到了");
    } else {
        puts("找不到");
    }
}
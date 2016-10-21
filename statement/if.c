#include <stdio.h>
int main()
{
    char age[3];
    puts("请输入字母:\n");
    scanf("%2s", age);

    if (age[0]=='A') {
        puts(age);
    } else {
        puts("loser");
    }

    return 0;
}
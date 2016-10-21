#include <stdio.h>

int main()
{
    char test[3];
    scanf("%2s", test);

    switch(test[0]) {
        case 'a':
            puts("this is a");
            break;
        case 'b':
            puts("this is b");
            break;
            default:
            puts("are you ok?");
    }

    return 0;
}
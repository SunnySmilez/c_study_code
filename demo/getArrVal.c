#include <stdio.h>

int main()
{
    char str[] = "this is arr";
    printf("看看结果%c\n", str[3]);
    printf("另外一种方式看看结果%c\n", *(str+3));

    int nums[] = {1,2,3};
    printf("看看结果%i\n", nums[2]);
    printf("另外一种方式看看结果%i\n", *(nums+2));

    printf("看看指针位置%p\n", nums);
    printf("看看指针位置%p\n", nums+1);
    return 0;
}
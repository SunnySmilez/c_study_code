#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("int最大值是:%i\n", INT_MAX);
    printf("int最小值是:%i\n", INT_MIN);
    printf("int占用的字节大小:%lu bytes\n", sizeof(int));

    printf("float最大值是:%f\n", FLT_MAX);
    printf("float最小值是:%.50f\n", FLT_MIN);
    printf("float占用的字节大小:%lu bytes\n", sizeof(float));

    printf("char最大值是:%d\n", CHAR_MAX);
    printf("char最小值是:%d\n", CHAR_MIN);
    printf("char占用的字节大小:%lu bytes\n", sizeof(char));

    printf("signed char最大值:%d\n",SCHAR_MAX);
    printf("signed char最小值:%d\n",SCHAR_MIN);
    printf("unsigned char最大值:%u\n",UCHAR_MAX);

    printf("double最大值是:%f\n", DBL_MAX);
    printf("double最小值是:%.5f\n", DBL_MIN);
    printf("double占用的字节大小:%lu bytes\n", sizeof(double));

    printf("short最大值是:%d\n", SHRT_MAX);
    printf("short最小值是:%d\n", SHRT_MIN);
    printf("short占用的字节大小:%lu bytes\n", sizeof(short));

    printf("long最大值是:%ld\n", LONG_MAX);
    printf("long最小值是:%ld\n", LONG_MIN);
    printf("long占用的字节大小:%lu bytes\n", sizeof(long));

    return 0;
}
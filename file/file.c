#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    argc代表传入函数main的参数的个数
    argv表示实际的参数数组
*/
int main(int argc, char *argv[])
{
    char line[80];

    /*
        argc第0个参数是函数名,所以一共有6个参数
    */
    if (argc != 6) {
        fprintf(stderr, "you need to give 5 arguments\n");
        return 1;
    }

    /*
        注意:一定要是双引号,写别的语言惹的祸
    */
    FILE *in = fopen("spooky.csv", "r");
    FILE *file1 = fopen(argv[2], "w");
    FILE *file2 = fopen(argv[4], "w");
    FILE *file3 = fopen(argv[5], "w");
    /*
        用fscanf读取自定义数据流
    */
    while(fscanf(in, "%79[^\n]\n", line) == 1) {
        if (strstr(line, argv[1])) {
            /*
                用fprintf输出自定义数据流
            */
            fprintf(file1, "%s\n", line);
        } else if (strstr(line, argv[3])) {
            fprintf(file2, "%s\n", line);
        } else {
            fprintf(file3, "%s\n", line);
        }
    }

    fclose(file1);
    fclose(file2);
    fclose(file3);
    return 0;
}





















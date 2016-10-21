#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_scores(const void * scores_a, const void * scores_b);

typedef struct {
    int width;
    int height;
} rectangle;

int compare_areas(const void* a, const void* b);

int compare_name(const void* a, const void* b);

int main()
{
    int scores[] = {2,3,123,345,456,7,11,3,5,6};
    qsort(scores, 10, sizeof(int), compare_scores);
    int i;

    for(i=0;i<10;i++) {
        printf("%i\n", scores[i]);
    }

    int areas[] = {2,3,345,123,1};
    qsort(areas, 5, sizeof(int), compare_areas);
    int x;

    for(x=0;x<5;x++) {
        printf("%i\n", areas[x]);
    }

    char *names[] = {"c", "a","b"};
    qsort(names, 3, sizeof(char*), compare_name);
    int z;

    for(z=0;z<3;z++) {
        printf("%s\n", names[z]);
    }

    return 0;
}

/**
    void指针可以保存任何类型数据的地址,但使用前必须把它转换成具体类型
*/
int compare_scores(const void * scores_a, const void * scores_b)
{
    /**
        int * 把void指针转换成整形指针
        *(int *)获取获取scores_a中的整形值
    */
    int a = *(int *)scores_a;
    int b = *(int *)scores_b;

    return b-a;
}

int compare_areas(const void *a, const void *b)
{
    /**
        把指针转换成相应的类型
    */
    rectangle *ia = (rectangle*)a;
    rectangle *ib = (rectangle*)b;
    /**
        矩形面积计算
    */
    int area_a = (ia->width * ia->height);
    int area_b = (ia->width * ia->height);

    return area_a-area_b;
}

int compare_name(const void* a, const void* b)
{
    /**
        char** 代表的是指向字符指针的指针
    */
    char** sa = (char**)a;
    char** sb = (char**)b;

    /**
        strcmp接收的是char*的值,而char**是指针地址
    */
    return strcmp(*sa, *sb);
}
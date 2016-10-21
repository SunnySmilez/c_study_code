#include <stdio.h>

enum response_type {DUMP, SECOND_CHANCE, MARRIAGE};

typedef struct {
    char* name;
    enum response_type type;
}response;

void dump(response r);
void second_chance(response r);
void marriage(response r);

int main()
{
    response ra[] = {
        {"test", DUMP},
        {"test2", SECOND_CHANCE},
    };

    /**
        定义函数数组
    */
    void(*func_arr[])(response) = {dump, second_chance, marriage};

    int i;
    for (i=0;i<2;i++) {
        /**
            使用函数数组定义的方法
        */
        (func_arr[ra[i].type])(ra[i]);

        /**
            受用switch的方法
        */
        switch(ra[i].type) {
            case DUMP:
                dump(ra[i]);
            break;
            case SECOND_CHANCE:
                second_chance(ra[i]);
            break;
            default:
                marriage(ra[i]);
            break;
        }
    }

    return 0;
}

void dump(response r)
{
    printf("hello,i'm dump, you are %s\n", r.name);
}

void second_chance(response r)
{
    printf("hello,i'm second_chance, you are %s\n", r.name);
}

void marriage(response r)
{
    printf("hello,i'm marriage, you are %s\n", r.name);
}

#include <stdio.h>

enum response_type {DUMP, SECOND_CHANCE, MARRIAGE};

typedef struct {
    char* name;
    enum response_type type;
}response;

void dump(response r);
void second_chance(response r);
void marriage(response r);
void (*replies[])(response) = {dump, second_chance, marriage};

int main()
{
    response r[] = {
        {"Mike", DUMP},
        {"Luis", SECOND_CHANCE},
        {"Matt", SECOND_CHANCE},
        {"William", MARRIAGE}
    };

    int i;
    for (i = 0; i<4; i++) {
        (replies[r[i].type])(r[i]);
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
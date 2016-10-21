#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//结构定义函数体的外面多个函数才能共享
typedef struct island {
    char *name;
    char *open;
    char *close;
    struct island *next;
} island;

void display(island *start);
void release(island *start);
island* create();

int main()
{
    island *start = NULL;
    island *i = NULL;
    island *next = NULL;
    char name[80];
    for(; fgets(name, 80, stdin) != NULL; i=next) {
        next = create(name);
        if (start == NULL) {
            start = next;
        }

        if (i != NULL) {
            i->next = next;
        }

        display(start);
        release(start);
    }

    display(i);
}

island* create (char *name)
{
    island *i = malloc(sizeof(island));
    //注意在此处一定用用strdup在堆上存储,如果都是在栈上存储,函数结束后会释放内存空间,每次都只能保存最后传入的name指针指向的值
    i->name = strdup(name);
    i->open = "09:00";
    i->close = "17:00";
    i->next = NULL;

    return i;
}


void display(island *start) {
    island *i = start;
    for (;i!=NULL;i=i->next) {
        printf("name:%s,open:%s-%s\n",i->name, i->open, i->close);
    }
}

void release(island *start) {
    island *i = NULL;
    island *next = NULL;

    for(;i!=NULL;i=next) {
        next = i->next;
        free(i->name);
        free(i);
    }
}
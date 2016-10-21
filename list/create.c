#include <stdio.h>
//注意要先定义函数在main函数的外部
void display();
//结构定义函数体的外面多个函数才能共享
typedef struct island {
    char *name;
    char *open;
    char *close;
    struct island *next;
} island;

int main()
{
    island amity = {"Amity", "9:00", "17:00", NULL};
    island craggy = {"craggy", "9:00", "17:00", NULL};
    island shutter = {"shutter", "9:00", "17:00", NULL};

    amity.next = &craggy;
    craggy.next = &shutter;

    display(&amity);
    return 0;
}

void display(island *start) {
    island *i = start;
    for (;i!=NULL;i=i->next) {
        printf("name:%s,open:%s-%s\n",i->name, i->open, i->close);
    }
}
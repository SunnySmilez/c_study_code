#include <stdio.h>

typedef union {
    short count;
    float volume;
    float weight;
} quantity;

typedef struct {
    const char *name;
    const char *country;
    quantity amount;
} fruit_order;

int main()
{
    /*
        此处的.amount表示fruit_order中的amount字段,.count表示quantity中的字段
    */
    fruit_order apples = {"apple", "china", .amount.count = 20};
    printf("%s,%s,%i", apples.name, apples.country, apples.amount.count);

    return 0;
}
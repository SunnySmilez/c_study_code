#include <stdio.h>

int main()
{
    typedef union {
        short count;
        float volume;
        float weight;
    } quantity;

    quantity a = {1};

    quantity b = {.volume = 4.6};

    quantity c;
    c.weight = 3.7;
    printf("%i,%f,%f", a.count, b.volume, c.weight);
    return 0;
}
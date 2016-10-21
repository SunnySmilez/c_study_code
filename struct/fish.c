#include <stdio.h>

int main()
{
    struct fish {
        /*
            const char * 是用来保存不想修改的字符串,也就是字符串的字面值
        */
        const char *name;
        const char *species;
        int teeth;
        int age;
    };

    struct fish snappy = {
        /*
            注意依然不能使用单引号
        */
        "snappy",
        "piranha",
        69,
        4
    };

    printf("%s,%s,%i,%i", snappy.name, snappy.species, snappy.teeth, snappy.age);
    return 0;
}
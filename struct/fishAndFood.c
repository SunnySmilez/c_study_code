#include <stdio.h>

int main()
{
    /*
        注意结束的分号不要忘记打,这个不是数组
    */
    struct preferences {
        /*
            此处结尾是分号,不是逗号
        */
        const char *food;
        float exercise_hours;
    };

    struct fish {
        const char *name;
        const char *species;
        int teeth;
        int age;
        /*
            结构的嵌套:在结构中定义结构
            此处定义的不是一个结构体,而是一个结构创建后的数据(是struct preferences care而不是struct preferences)
        */
        struct preferences care;
    };

    struct fish snappy = {
        "snappy",
        "piranha",
        69,
        4,
        {
            "fish",
            4.00
        }
    };

    /*
        获取嵌套的结构中的数据注意care是嵌套的结构的名字
    */
    printf("%s,%f", snappy.care.food, snappy.care.exercise_hours);
}
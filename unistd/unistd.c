#include <stdio.h>
#include <unistd.h>

/*
    argc代表传入函数main的参数的个数
    argv表示实际的参数数组
*/
int main(int argc, char *argv[])
{
    char *delivery = "";
    int thick = 0;
    int count = 0;
    char ch;

    while((ch = getopt(argc, argv, "d:t")) != EOF) {
        switch(ch) {
            case 'd':
                delivery = optarg;
                break;
            case 't':
                thick = 1;
                break;
            default:
                fprintf(stderr, "Unknow option: '%s'\n", optarg);
                return 1;
        }
    }

    argc -= optind;
    argv += optind;

    if (thick) {
        puts("thick crust");
    }

    if (delivery[0]) {
        printf("to be delivered %s.\n", delivery);
    }

    puts("Ingredients:");
    for(count = 0; count<argc;count++) {
        puts(argv[count]);
    }
    return 0;
}





















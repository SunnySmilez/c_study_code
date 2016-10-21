#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char *my_env[] = {"FOOD=coffee", NULL};
    if (execlp("./coffe", "./coffe", "donuts", NULL, my_env) == -1)
    {
        fprintf(stderr, "Can't create order:%s\n", strerror(errno));
        return 1;
    }

    return 0;
}
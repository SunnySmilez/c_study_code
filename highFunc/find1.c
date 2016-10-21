#include <stdio.h>
#include <string.h>

int NUM_ADS = 7;
char *ADS[] = {
    "William:SBM GSON likes sport,TV,dining",
    "Matt:SWM NS likes art,movies,theather",
    "Luis:SLM ND likes books,theater,art",
    "MIKE:DWM DS likes truncks,sports and bieber",
    "Peter:SAM likes chess,working out and art",
    "Josh:SJM likes sports,movies and theater",
    "Jed:DBM likes theater,books and dining"
};
/**
 * 都要定义哦
 */
void find();
int sports_no_bieber(char *s);
int sports_or_workout(char *s);
int ns_theater(char *s);

int main()
{
    find(sports_no_bieber);
    find(sports_or_workout);
    find(ns_theater);
    return 0;
}

/**
 * 注意find中传入的参数是函数的指针
 */
void find(char** (*func)(char*))
{
    int i;
    puts("Search results:");
    puts("---------------------");

    for(i=0;i<NUM_ADS;i++) {
        if (func(ADS[i])) {
            printf("%s\n", ADS[i]);
        }
    }

    puts("----------------");
}

int sports_no_bieber(char *s)
{
    return strstr(s, "sports") && !strstr(s, "bieber");
}

int sports_or_workout(char *s)
{
    return strstr("s", "sports") || strstr(s, "working out");
}

int ns_theater(char *s)
{
    return strstr(s, "NS") && strstr(s, "theater");
}
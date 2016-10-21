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
void find();

int main()
{
    find();
    return 0;
}

void find()
{
    int i;
    puts("Search results:");
    puts("---------------------");

    for(i=0;i<NUM_ADS;i++) {
        if (strstr(ADS[i], "sports") && (!strstr(ADS[i], "bieber"))) {
            printf("%s\n",ADS[i]);
        }
    }

    puts("----------------");
}
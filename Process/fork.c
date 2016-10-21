#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

 int main(int argc, char *argv[])
 {
    char *feeds[] = {"http://wwww.cnn.com/rss/celebs.xml",
                    "http://www.rollingstone/rock.xml",
                    "http://eonline.com/gossip.xml"
                    };
    int times = 3;
    char *phrase = argv[1];
    int i;
    for(i = 0; i< times; i++) {
        char var[255];
        sprintf(var, "RSS_FEED=%s", feeds[i]);
        char *vars[] = {var, NULL};
        pid_t pid_t = fork();
        if (pid_t == -1) {
            fprintf(stderr, "can't fork process:%s\n", strerror(errno));
            return 1;
        }

        if (!pid_t && execle("/usr/bin/python", "/usr/bin/python", "./rssgossip.py", phrase, NULL, vars) == -1) {
            fprintf(stderr, "can't run script:%s\n", strerror(errno));
            return 1;
        }
    }

    return 0;
 }

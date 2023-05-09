#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    pid_t mypid, x;
    mypid = getpid();
    printf("[%u]: I am running ls -l -a\n", mypid);
    x = fork();
    
    if (x == 0)
    {
        if (execl("/bin/ls", "ls", "-l", "-a", NULL) == -1)
        {
            printf("Running ls failed\n");
        }
    }
    else
    {
    waitpid(x, NULL, 0);
        printf("[%u]: ls -l -a completed\n", mypid);
    }

    return 0;
}

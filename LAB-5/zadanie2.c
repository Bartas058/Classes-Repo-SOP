#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main ()
{
    pid_t child_pid;
    printf("PID of the main programme: %d\n", (int) getpid());
    child_pid = fork();
    
    if (child_pid != 0)
    {
        printf("This is the parent process and its PID is: %d\n", (int) getpid());
        printf("PID of the descendant process: %d\n", (int) child_pid);
    }
    else
        printf("This is the descendant process and its PID is: %d\n", (int) getpid());
    
    return 0;
}

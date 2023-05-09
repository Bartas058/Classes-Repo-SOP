#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int status, exit_status;
    pid_t pid = fork();
    
    if (pid < 0)
        printf("Error! Unable to create new process\n");
    
    if (pid == 0)	// Here he will enter only as a descendant
    {
        printf("Descendant (PID: %d) dormant ...\n", getpid());
        sleep(5);
        exit(0);	// Exit of the descendant
    }
    
    while (waitpid(pid, &status, WNOHANG) == 0)		// Here only as a parent
    {
        printf("I am looking forward to the completion of the descendant ...\n");
        sleep(1);
	}

    exit_status = WEXITSTATUS(status);		// Extracting a value from the return of the waitpid
    printf("The descendant %d completed the action by returning %d\n", pid, exit_status);

    return 0;
}

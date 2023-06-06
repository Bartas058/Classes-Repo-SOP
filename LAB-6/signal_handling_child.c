#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int main() {
    pid_t child_pid = fork();
    
    if (child_pid == 0) {
        char* args[] = {"./signal_handling", NULL};
        execvp(args[0], args);
    } else if (child_pid > 0) {
        sleep(2);
        printf("Sending signals to the descendant process....\n");
        kill(child_pid, SIGINT);
        sleep(2);
        kill(child_pid, SIGUSR1);
        sleep(2);
        printf("No more sending signals.\n");
    } else {
        perror("Fork error");
        exit(1);
    }

    return 0;
}
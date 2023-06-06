#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

#define NUM_PROCESSES 5

void handle_signal(int signal) {
    printf("A signal was received in the process group: %d\n", signal);
}

int main() {
    pid_t child_pids[NUM_PROCESSES];
    int i;

    for (i = 0; i < NUM_PROCESSES; i++) {
        pid_t child_pid = fork();

        if (child_pid == 0) {
            signal(SIGINT, handle_signal);
            while (1) {
                sleep(1);
            }
            exit(0);
        } else if (child_pid > 0) {
            child_pids[i] = child_pid;
        } else {
            perror("Fork error");
            exit(1);
        }
    }

    sleep(2);

    printf("Sending signals to a group of processes ...\n");
    for (i = 0; i < NUM_PROCESSES; i++) {
        kill(child_pids[i], SIGINT);
        sleep(1);
    }
    printf("No more sending signals.\n");

    sleep(2);

    return 0;
}
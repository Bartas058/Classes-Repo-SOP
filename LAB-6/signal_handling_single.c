#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handle_signal(int signal) {
    printf("A signal was received: %d\n", signal);
}

int main(int argc, char *argv[]) {
    signal(SIGINT, handle_signal);
    signal(SIGUSR1, handle_signal);

    int option;
    printf("Select an option:\n");
    printf("1. Perform the default operation\n");
    printf("2. Ignore the signal\n");
    printf("3. Capture and handle the signal\n");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Execution of the default operation\n");
            break;
        case 2:
            printf("Ignoring the signal\n");
            signal(SIGINT, SIG_IGN);
            break;
        case 3:
            printf("Signal capture and handling\n");
            break;
        default:
            printf("Incorrect option\n");
            return 1;
    }

    printf("Process PID: %d\n", getpid());

    while (1) {
        sleep(1);
    }

    return 0;
}
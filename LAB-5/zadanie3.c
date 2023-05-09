#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main ()
{
	printf("You are in the directory:\n");
	execl("/bin/pwd", "pwd", (char *) 0);
	perror("PWD start-up error");
	
	return 0;
}

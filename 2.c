#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	pid_t pid1 = fork();
	if(pid1 == 0)
	{
	printf("Child 1 PID: %d, PPID: %d\n", getpid(),getppid());
	exit(0);
	}

	pid_t pid2 = fork();
	if(pid2 == 0){
		printf("Child2 PID: %d, PPID: %d\n",getpid(),getppid());
		exit(0);
	}
	
	pid_t pid3 = fork();
	if(pid3 == 0){
	printf("Child3  PID: %d, PPID: %d\n",getpid(),getppid());
	exit(0);
	}

	printf("PID: %d\n", getpid());
	return 0;
}

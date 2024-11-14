#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t pid1 = fork();
	pid_t pid2 = fork();
	if(pid1 < 0 || pid2 < 0){
		printf("Fork failed.\n");
		return 1;
	}

	printf("Process ID: %d\n",getpid());

	for(int i = 1; i <=20; i++){
		printf("PID: %d, Loop value: %d\n", getpid(),i);
	}
	return 0;
}

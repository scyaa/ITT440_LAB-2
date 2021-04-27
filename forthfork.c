#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void childTask(){
	char name[50];
        printf("\nEnter your name: ");
        scanf("%s", name);
        printf("Your name is %s. \n", name);
	}
	
void parentTask(){
	wait(NULL);
	printf("Job is done!\n");
        }

int main(void){


for(int i=1; i<5; i++){
	pid_t pid = fork();
	
	if (pid == 0){
		childTask();
		exit(EXIT_SUCCESS);
	}
	else{
		parentTask();
	}
}
	
return (EXIT_SUCCESS);
}

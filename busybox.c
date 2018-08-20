#include <stdio.h>
#include <unistd.h>
#include <string.h>

void main(int argc, char* argv[], char* envp[])
{
	if(argc <= 1)
		printf("Busybox need at least 1 command!\n");
	else{
		char prog[100];
		strcpy(prog, "./bin/");
		strcat(prog, argv[1]);

		char* arg_list[20] = {NULL};

		for(int i=1; i<argc; i++)
			arg_list[i-1] = argv[i];

		execve(prog, arg_list, envp);
	}
	
}



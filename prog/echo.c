#include <stdio.h>

void main(int argc, char* argv[])
{	
	if(argc == 1){
		printf("echo need input string!\n");
	}
	else{
		for(int i=1; i<argc; i++)
			printf("%s ", argv[i]);
		
		printf("\n");
	}
}

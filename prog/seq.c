#include <stdio.h>
#include <stdlib.h>

void main(int argc, char* argv[])
{	
	int start = 1, incre = 1, end;

	if(argc == 2){
		end = atoi(argv[1]);
	}
	else if(argc == 3){
		start = atoi(argv[1]);
		end = atoi(argv[2]);
	}
	else{
		start = atoi(argv[1]);
		incre = atoi(argv[2]);
		end = atoi(argv[3]);
	}

	for(int num=start; num<=end; num+=incre)
		printf("%d\n", num);
}

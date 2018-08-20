#include <stdio.h>
#include <string.h>

void main(int argc, char* argv[])
{
	FILE* fp = fopen(argv[2], "r");
	char line[100];

	while(fscanf(fp, "%[^\n]\n", line) != EOF){
		if(strstr(line, argv[1]) != NULL)
			printf("%s\n", line);
		else
			continue;
	}
	
	fclose(fp);
}

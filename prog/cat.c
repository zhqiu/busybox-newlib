#include <stdio.h>

void main(int argc, char* argv[])
{
	FILE* file;
	char line[100];

	for(int i=1; i<argc; i++){
		file = fopen((const char*)argv[i], "r");
		
		while(fgets(line, 100, file))
			printf("%s", line);

		fclose(file);
	}
}

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
//#include </usr/include/dirent.h>


int main(int argc, char* argv[])
{
/*
	DIR* mydir = NULL;
	struct dirent* myfile;
	struct stat mystat;

	char buf[512];
	mydir = my_opendir(argv[1]);

	if(mydir == NULL)
		printf("opendir is wrong.\n");

	while((myfile = readdir(mydir)) != NULL){
		sprintf(buf, "%s/%s", argv[1], myfile->d_name);
		stat(buf, &mystat);
		printf("%zu", mystat.st_size);
		printf(" %s\n", myfile->d_name);
	}

	closedir(mydir);
*/
	struct stat mystat;
	_stat(argv[1], &mystat);                       // gcc - stat() ; newlib - _stat()
	printf("size: %zu\n", mystat.st_size);
}

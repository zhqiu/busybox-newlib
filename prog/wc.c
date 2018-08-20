#include <stdio.h>

void main(int argc, char* argv[])
{
	int char_count = 0;
	int space_count = 0;
	int word_count = 0;
	int line_count = 0;

	char ch;

	FILE* fp = fopen(argv[1], "r");

	while((ch = fgetc(fp)) != EOF){
		char_count++;
		if(ch == ' '){
			space_count++;
			word_count++;
		}
		if(ch == '\n')
			line_count++;
	}

	printf("character_count=%d\n", char_count);
	printf("space_count=%d\n", space_count);
	printf("word_count=%d\n", word_count+1);
	printf("line_count=%d\n", line_count);
}

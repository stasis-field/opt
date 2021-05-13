#include <stdio.h>

/*
Strings are an array of characters. 
The difference between a character array and a string is
the string is terminated in a special character \0

*/


// Declaration

// char str_name[size];

// char str2[50] = "GeeksforGeeks";
// char str3[] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};
// char str4[14] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};

char line[20] = "XXXXXXXXXXXXXXXXXXX";

int renderline(char *linetorender){
	char *ptr = linetorender;
	while(*ptr !='\0')
	{
		printf("%c", *ptr);
		ptr++;
	}
	printf("\n");
	return 0;
};

int renderfield(char *linetorender){
	int rendercount = 10;
	while (rendercount != 0){
		renderline(linetorender);
		rendercount--;
	}

	return 0;
};

int main(){



	renderfield(line);

	return 0;
};
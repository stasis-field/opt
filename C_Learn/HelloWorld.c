// The following is a header file call
// Header files provide definitions for functions
// A .c source file needs an #include and possibly and argument 
// to a linker
#include <stdio.h>
/* This is also a way to comment */

// This is our main function
// It is mandatory for a C function
// Parentheses without anything in between means no arguments
// int means it returns an integer
int main()
{

	// Every statement ends in ";" except preprocessor directives like
	// include
	printf("hello World!\n");

	// Return 0 means everything is a-okay. 0 is the code for a 
	// successful code execution. Values greater than 0 indicate
	// something went wrong
	return 0;
}
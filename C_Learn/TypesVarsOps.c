#include <stdio.h>
#include <float.h>
#include <limits.h>




/*
	char c;					// Primary
	unsigned char uc;
	short s;
	unisgned short us;
	int i;					// Primary
	unsigned u;
	long l;
	unsigned long ul;
	float f;				// Primary
	double d;				// Primary
	long double ld;
	const int ci;
	*/

	// Signed and unsigned are modifiers, meaning that if you need
	// to work with values smaller than 0, you should tell the compiler
	// that your variable is signed, as in it can be larger or smaller
	// than 0

	// long is longer than int, which is longer than short.

	// const tells the compiler that the value of that constant won't be changed
	// once it's instanced

	/*
	char
		smallest type of variable
		guaranteed large enough to hold one byte of data (which is 2^8, or 256 values)
		always fixed size.
		can hold values from 0 through 255
	unsigned char
		same as char, but can hold from -128 through 127
	*/

	/*
	int
		go ahead and combine the signed/unsigned and short/long as needed
		as a short rule, will hold values from 0 to 65535 if unsigned
	signed int
		will hold from -32768 to 32767
	long
		will double the available bytes
	check /usr/include/limits.h header for the actual limits on your particular system
	*/

	/*
	float
	*/
	/*
	c = 'a';
	i = 234;
	f = 12643.984;
	ld = 16546581654161598309.87;
*/

int main()
{


	// The words in all caps are the defined macros that came from float.h
	// and limits.h
unsigned long long ullmax = ULLONG_MAX;
long lmax = LONG_MAX;
long double ldmax = LDBL_MAX;


	// %Lu is long long (L) unsigned (u)
	// %ld is long (l) and integer (d)
	// %Lf: a double is basically a long float, so a long double is long long (L) float (f)
printf("The max value of an unsigned long, long is %Lu.\n", ullmax);
printf("The max value of a long is %ld.\n", lmax);
printf("The max value of a long double is %Lf.\n", ldmax);

	// Casting
	// forcing the compiled to forget about a variables type and treat is as having another type that you supple. This is only done between compatible types.
	// We want to find out the ASCII value of 'a'. Like this:
char c = 'a';
printf("The ASCII value of 'a' is %d.\n", (int)c);
	// This works because a char is nothing more than a small int, so the types are compatible. Lets try casting to other types
printf("The ASCII value of 'a' is %lf.\n", (double)c);


// The increment operator
// x++ first uses then increments
// ++x first increments thn uses
int x;
int n = 10;
int z;

n++; // n will be 11 now
++n; // ditto, prefix or postfix is unimportant here

x = n++; // x will be 10
z = ++n; // z will be 11

// bitwise operators
// only to be used on integer types, signed or unsigned.
	// & - bitwise AND
	// | - bitwise OR
	// ^ - XOR
	// << - left shift
	// >> - right shift
	// - - one's complement

// evaluate both as true to return true:
// if (var1 == 2 && var2 == 8)
// 	...

// evaluate either or both as true:
// if (var1 == 2 || var2 ==8)
// 	...

return 0;

}
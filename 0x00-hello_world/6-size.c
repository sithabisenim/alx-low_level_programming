#include <stdio.h>

/**
 * main - print the string in the put funtion
 *
 * Description: using the main fuction
 * this program prints the size of various types on the computer it is compiled and run
 * Returns: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	printf ("Size of a char: %ld bytes(s)\n", sizeof(c));
	printf ("Size of an int: %ld bytes(s)\n" sizeof(i));
	printf ("Size of a long int: %ld byte(s)\n", sizeof(li);
	printf ("Size of a long long int: %ld bytes(s)\n", sizeof(lli));
	printf ("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}

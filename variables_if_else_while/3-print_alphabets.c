#include <stdio.h>
/**
 * main - Prints a to z in caps and low case
 *
 *
 * Return: zero
 */

int main(void)

{
	char  Lower = 'a';
	char  Upper = 'A';

	while (Lower <= 'z')
	{
		putchar(Lower);
		Lower++;
	}
	while (Upper <= 'Z')
	{
		putchar(Upper);
		Upper++;
	}
	putchar('\n');
	return (0);
}

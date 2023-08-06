#include <stdio.h>
/**
 * main - print numbers without char and use putchar
 *
 * Return: zero
 *
 */
int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
		putchar('\n');
		return (0);
}

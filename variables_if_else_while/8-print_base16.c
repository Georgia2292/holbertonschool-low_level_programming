#include <stdio.h>
/**
 * main - prints hexadecimal numbers
 *
 * Return: zero
 *
 */
int main(void)
{
	char numbers = '0';
	char alphabet = 'a';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}

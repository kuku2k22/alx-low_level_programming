#include <stdio.h>

/**
 * main - Print combinatins of two digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = tens + 1; ones <= 9; oones++)
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');

	return (0);
}
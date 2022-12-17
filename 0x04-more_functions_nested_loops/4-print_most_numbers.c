#include "main.h"

/**
 * print_numbers - prints number
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			putchar(i);
		}
	}
	putchar('\n');
}

#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a, b;
	for (a = 0; a <=23; b++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 100) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}

}

#include "main.h"
/**
 *jack bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{    
			putchar((hours / 10) + 48);
			putchar((hours % 10) + 48);
			putchar(':');
			putchar((minutes / 10) + 48);
			putchar((minutesi % 10) + 48);
			putchar('\n');
		}
	}
}

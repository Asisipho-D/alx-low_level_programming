#include "main.h"

/**
 * jack_bauer - Prints every minute of the day (00:00 to 23:59)
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');   /* Print tens digit of hour */
			_putchar((hour % 10) + '0');   /* Print ones digit of hour */
			_putchar(':');
			_putchar((minute / 10) + '0'); /* Print tens digit of minute */
			_putchar((minute % 10) + '0'); /* Print ones digit of minute */
			_putchar('\n');
		}
	}
}

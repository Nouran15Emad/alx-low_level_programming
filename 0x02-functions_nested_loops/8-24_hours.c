#include <stdio.h>
#include "main.h"

/**
*jack_bauer -  prints every minute of the day
*
*
*/

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours < 24)
	{
		while (minutes < 60)
		{
			printf("%02d:%02d", hours, minutes);
			minutes++;
			putchar('\n');
		}
		minutes = 0;
		hours++;

	}

}

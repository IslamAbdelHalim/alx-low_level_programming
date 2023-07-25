#include "main.h"
#include "stdio.h"

/**
 * jack_bauer - This function to print every minut in day
 * Return: Always 0
*/

void jack_bauer(void)
{
	int i;/*Represnt Hours*/
	int j;/*Represent Minuts*/

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf("%02d:%02d\n", i, j);
		}
	}
}

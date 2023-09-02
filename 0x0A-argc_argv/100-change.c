#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: the number of argument
 *
 * @argv: The argument
 *
 * Return: Always 0 means success
 *
*/

int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		int money = atoi(argv[1]);
		if (money < 0)
		{
			printf("%d\n",0);
		}
		else
		{
			int i, leastcoins = 0;

			for (i = 0; i < 5; i++)
			{
				if (money >= coins[i])
				{
					leastcoins += (money / coins[i]);
					money %= coins[i];

					if (money % coins[i] == 0)
						break;
				}
			}
			printf("%d\n", leastcoins);
		}
	}
	return (0);
}

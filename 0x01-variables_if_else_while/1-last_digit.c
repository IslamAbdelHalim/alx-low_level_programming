#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	/* your code goes there */
	printf("Last digit of %d is %d ", n, digit)
	if(digit > 5)
	{
	  printf("and is greater than 5\n");
	}
	else if(digit < 6 && digit != 0)
	{
	  printf("and is less  than 5 and not 0\n");
	}
	else 
	{
	  printf("and is 0\n");
	}
	return (0);
}

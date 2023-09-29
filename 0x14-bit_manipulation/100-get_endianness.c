#include "main.h"

/***/

int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *)&i;

	if (*c == 1)
		return (1);

	return (0);
}

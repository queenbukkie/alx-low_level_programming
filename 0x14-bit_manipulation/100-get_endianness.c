#include "main.h"

/**
 * get_endianness - check the machine
 * Return: 0 for the big size and 1 for the smaller size
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

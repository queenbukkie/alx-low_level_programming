#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return on Success 1.
 * On error, -1 is rturned, an error is set appropriately
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}

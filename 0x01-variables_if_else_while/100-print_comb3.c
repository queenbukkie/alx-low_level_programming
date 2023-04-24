#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'different combunation of two digits'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p, z;
	
	for (p = '0'; p < '9'; p++)
	{

	for (z = p + 1; z <= '9'; z++)
	{
	if (z != p)
	{
	putchar(p);
	putchar(z);
	if (p == '8' && z == '9')
	continue;
	putchar (',');
	putchar (' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

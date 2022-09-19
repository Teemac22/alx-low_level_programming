<<<<<<< HEAD
#include "main.h"
/**
 * puts_half - function the prints half of a string, followed by a new line
 *
 * @str: this is the input string
 * Return: half the input
 */
void puts_half(char *str)
{	
	int j = 0;
	int k;
	
	while (str[j] != '\0')
	{
		j++;
	}
	
	if (j % 2 == 1)
	{
		k = (j - 1) / 2;
		k += 1;
	}
	else
	{
		k = j / 2;
	}
	
	for (; k < j; k++)
	{
		_putchar(str[k]);
	}
}	
=======
#include main.h
#include <string.h>

/**
*
*/
void puts_half(char *str)
{
	int x, y;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else 
		y = x / 2;
	for (i = y; i < x; i ++)
		_putchar(str[i]);
	_putchar('\n');
}
>>>>>>> Task 7

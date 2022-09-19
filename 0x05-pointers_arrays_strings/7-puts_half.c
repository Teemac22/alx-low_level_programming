#include "main.h"
/**
 * puts_half - function the prints half of a string, followed by a new line
 *
 * @str: this is the input string
 * Return: half the input
 */
void puts_half(char *str)
{	
	
	int len = 0;

	int index, half

	index= 0;
	while (str[index] != '\0')
		index++;

	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}     

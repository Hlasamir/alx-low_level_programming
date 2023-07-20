#include "main.h"
/**
 *print_last_digit - entry level
 * @i: intger for number
 *Return: Alawys 0
*/
int print_last_digit(int i)
{
	int ld = i % 10;

	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{	_putchar(ld + 48);
		return (ld);
	}
}

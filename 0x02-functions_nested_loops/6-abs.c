#include "main.h"
/**
 *_abs - entry level
 *@dig: the input number of an intger
 *Return: Alawys 0
*/
int _abs(int dig)
{
	if (dig < 0)
	{
		dig = dig * (-1);
		return (dig);
	}
	else
		return (dig);
}

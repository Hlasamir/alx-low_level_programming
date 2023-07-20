#include "main.h"
/**
 *_isalpha - checks for alphabetic character.
 * @c: checks for alphabetic character.
 *Return: Alawys 0 (true)
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

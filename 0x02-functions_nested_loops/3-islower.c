#include "main.h"

/**
* _islower -> checks if the character is lowercase
* @c: integer to be tested
* Return: 1 or 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

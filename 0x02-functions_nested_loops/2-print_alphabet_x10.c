#include "main.h"
/**
* print_alphabet_x10 -> prints lowercase aphates in ten rows
*/

void print_alphabet_x10(void)
{
	int n = 1;
	int i;

	while (n <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		n++;
		_putchar('\n');

	}
}

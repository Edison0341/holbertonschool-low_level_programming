#include "main.h"
/**
 * rev_string- reverse a string
 * @s: pointer
 */
void rev_string(char *s)
{
	int counter, i, j;
	char *str, temp;

	for (counter = 0; counter >= 0; counter++)
	{
		if (s[counter] == '\0')
		break;
	}

	str = s;

	for (i = 0; i < (counter - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}

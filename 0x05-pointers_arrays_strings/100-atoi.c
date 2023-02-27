#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @str: The string to convert
 *
 * Return: The integer value of the string
 */

int _atoi(char *str)
{
	int sign = 1;
	int result = 0;
	
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			break;
		}
		result = result * 10 + (*str - '0');
		str++;
	}
	return sign * result;
}

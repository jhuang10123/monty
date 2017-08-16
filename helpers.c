#include "monty.h"
/**
 * int_convert - converts string to int
 * @value: string to convert
 * Return: converted value or -1
 */
int check_digit(char *value)
{
	unsigned int i;

	i = 0;
	while (value[i] != '\0')
	{
		if (value[i] == '-' && i = 0)
			continue;

		if (isdigit(value[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}

	return (0);
}

#include "main.h"
/**
 * _atoi - convert a string to an integer,
 *      take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * @s: char; pointer to the variable
 *
 * Return: int
 */

int _atoi(char *s)
{
	int i, sign, num;

	i = 0;
	sign = 1;
	num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			while (s[i] >= 48 && s[i] <= 57)
			{
				num = (s[i] - 48) * sign + num * 10;
				i++;
			}
			break;
		}
		i++;
	}
	return (num);
}

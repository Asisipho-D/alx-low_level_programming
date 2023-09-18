#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* Initialize sign to positive */

	/* Check for a negative sign */
	if (*s == '-')
	{
		sign = -1; /* Set sign to negative */
		s++; /* Move to the next character */
	}

	/* Iterate through the string */
	while (*s)
	{
		/* Check if the character is a digit */
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else
		{
			/* If a non-digit character is encountered, stop parsing */
			break;
		}
		s++; /* Move to the next character */
	}

	return result * sign;
}

/* ... (other code) ... */

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = my_atoi("98"); /* Change _atoi to my_atoi */
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}

/* ... (other code) ... */

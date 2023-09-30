#include "main.h"

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;
	int l = 0;

	while (*(src + l) != '\0')
	{
		*dest = *(src + l);
		dest++;
		l++;
	}

	*dest = '\0';
	return (dest_start);
}

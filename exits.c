#include "shell.h"

/**
 * _strncpy - Copies a string with a maximum length of 'n' characters
 * @dest: Pointer to the destination string where the copy will be placed
 * @src: Pointer to the source string to be copied
 * @n: Maximum number of characters to be copied from 'src'
 * Return: A pointer to the modified 'dest' string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 * _strncat - Concatenates two strings with a maximum of 'n' bytes
 * @dest: The destination string where the concatenation will be stored
 * @src: The source string to be appended
 * @n: The maximum number of bytes to append from 'src'
 * Return: A pointer to the modified 'dest' string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: The string to be searched
 * @c: The character to look for
 * Return: A pointer to the first occurrence 'c' in 's', or NULL if not found
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

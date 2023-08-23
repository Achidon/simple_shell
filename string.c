#include "shell.h"

/**
 * _strlen - returns the string's length
 * @s: check the string's length
 *
 * Return: whole number of the strings length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - the comparison between two characters
 * @s1: character 1
 * @s2: character 2
 *
 * Return: char1 < char2 = (-) , char1 > char2 = (+), char1 = char2 == (0)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - checks if a string begins with a given prefix or not
 * @haystack: main c string to be scanned
 * @needle: search for the sub-string
 *
 * Return: address next character of haystack or Void
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concatenates string2 to string1
 * @dest: the destination array
 * @src: the source array
 *
 * Return: pointer to destination array
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}

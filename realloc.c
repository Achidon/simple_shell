#include "shell.h"

/**
 * _memset - fills a block of memory with a particular value
 * @s: the pointer to the string
 * @b: the byte that fills the string
 * @n: the value of bytes that needs to be filled
 * Return: address of a local variable is returned
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - an array of strings is freed
 * @pp: array of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - a block of memory is reallocated
 * @ptr: pointer to prev malloc block
 * @old_size: byte size of the prev block
 * @new_size: byte size of the new block
 *
 * Return: pointer to the old block name
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}

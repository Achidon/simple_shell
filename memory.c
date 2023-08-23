#include "shell.h"

/**
 * bfree - a pointer is freed and the address = Null
 * @ptr: frees the address of the pointer
 *
 * Return: freed = 1, else = 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}


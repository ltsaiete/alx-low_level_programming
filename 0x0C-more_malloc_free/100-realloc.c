#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr:  is a pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * @old_size:  is the size, in bytes, of the allocated space for ptr
 * @new_size:  is the new size, in bytes of the new memory block
 *
 * Return: ptr with the newly allocated size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return malloc(new_size);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
	{
		memcpy(new_ptr, ptr, new_size);
		free(ptr);
		return (new_ptr);
	}

	memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}

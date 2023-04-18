/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Wed, 19 Apr 2023
 */

#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - fucntion frees dogs in memory
 * @d: pointer to dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

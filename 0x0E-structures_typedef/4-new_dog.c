/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Wed, 19 Apr 2023
 */

#include <stdio.h>

/**
 * new_dog - creates a new instance ogf dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: (d)pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nd, od, i;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (nd = 0; name[nd]; nd++)
		;
	nd++;
	d->name = malloc(nd * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < nd; i++)
		d->name[i] = name[i];
	d->age = age;
	for (od = 0; owner[od]; od++)
		;
	od++;
	d->owner = malloc(od * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i < od; i++)
		d->owner[i] = owner[i];
	return (d);
}


/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Tue, 18 Apr 2023
 */

#include "dog.h"

/**
 * init_dog - fucntion initializes the struct dog
 * @d: pointer to struct
 * @name: param name of the dog
 * @age: param age of the dog
 * @owner: param owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


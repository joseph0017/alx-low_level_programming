#ifndef _DOG_H_
#define _DOG_H_
#include "main.h"

/**
 * struct dog - structure type for a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Description: data structure for dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif

#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure to be created
 *
 * @name : char * element of struct dog
 * @age  : float  element of struct dog
 * @owner: char * element of struct dog
 *
 * Description : structure with 3 elements name age owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

#ifndef DOG_H
#define DOG_H
/**
 * struct dog - elements of dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Description: dog object with its name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);

#endif

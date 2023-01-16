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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif

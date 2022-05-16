#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - Information about a dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: Name of dog's owner
 */

struct dog
{
	char* name;
	float age;
	char* owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif


#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 * struct dog - Entry point
 *
 * Description: 'This new struct gives the name, age and owner of a dog
 * and return nothing'
 *
 * @name: Char pointer
 * @age: Float
 * @owner: Char pointer
 *
 * Return: Nothing
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

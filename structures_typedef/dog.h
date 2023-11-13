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

#ifndef INIT_DOG_PROTO
#define INIT_DOG_PROTO

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

#ifndef PRINT_DOG_PROTO
#define PRINT_DOG_PROTO

void print_dog(struct dog *d);

#endif

#ifndef DOG_T_STRUCT
#define DOG_T_STRUCT

typedef struct dog dog_t;

#endif

#ifndef NEW_DOG_PROTO
#define NEW_DOG_PROTO

dog_t *new_dog(char *name, float age, char *owner);

#endif

#ifndef FREE_DOG_PROTO
#define FREE_DOG_PROTO

void free_dog(dog_t *d);

#endif

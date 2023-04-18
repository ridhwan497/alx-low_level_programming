#ifndef DOG_H
#define DOG_H

/**
 * struct dog - doggy
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog 
 */
typedef struct dog {
	char *name;
	float age;
	char *owner;
} doggy;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
doggy *new_dog(char *name, float age, char *owner);
void free_dog(doggy *d);

#endif

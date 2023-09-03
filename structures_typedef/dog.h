#ifndef DOG_H
#define DOG_H
/**
 *  struct dog - struct that contains the dog´s info
 *
 *  @name: dog name
 *  @age: dogs age
 *  @owner: dogs owner
 *
 *  Return: Nothing
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif


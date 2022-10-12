#include <main.h>

/**
 * struct my_struct - Short description
 * @a: First member
 * @b: Second member
 * @c: Third member
 *
 * Description: Longer description
 */

struct dog;
{
	char *name;
	char *owner;
	float age;
};

struct dog my_dog(char *name, char *owner, float age)
{
	struct dog my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = name;
	return (0);
}

int main(void)
{
struct dog my_dog;

my_dog = my_dog("Poppy", "3.5", "Bob");
if (my_dog == NULL)
	return (1);
my_dog.name = "Poppy";
my_dog.age = 3.5;
my_dog.owner = "Bob";
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}

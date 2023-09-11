#define DOG_H

/**
 * struct dog - dog
 * @name: element
 * @age: element
 * @owner: element
 *
 * Description: woof
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);

#ifndef _mydog
#define _mydog
/**
  * struct dog - struct.
  * @name: name.
  * @age: age.
  * @owner: owner.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
  * dog_t - define dig_t
  */
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
unsigned int _strlen(char *s);
char *_strcpy(char *s, int len);
#endif

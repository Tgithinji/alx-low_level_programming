#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char _strcpy(char *s1, char *s2);
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: of the dog
 *
 * Return: the created dog or NULL iincase of failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = malloc(_strlen(name) + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(_strlen(owner) + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	_strcpy(my_dog->name, name);
	my_dog->age = age;
	_strcpy(my_dog->owner, owner);
	return (my_dog);
}

/**
 * _strlen - find the length of a string
 * @s: the string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len, i;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - copies one string to another
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to s2
 */
char _strcpy(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i] != '\0'; i++)
	{
		s1[i] = s2[i];
	}
	s1[i] = '\0';

	return (*s1);
}

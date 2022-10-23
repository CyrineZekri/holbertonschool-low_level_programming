#include "main.h"
/**
 **create_array-creates an array.
 *@size:input var
 *@c:input var
 *Return: an array of strings
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *string;

	string = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (string == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		string[i] = c;
	}
	return (string);
}

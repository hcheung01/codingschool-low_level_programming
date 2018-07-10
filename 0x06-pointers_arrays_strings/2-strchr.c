#include "holberton.h"

/**
 * _strchar - function with two arguments
 * @s: char type pointer 1st argument
 * @c: char type 2nd argument
 *
 * Description: locates a character in a string
 * Return: character in string
 */
char *_strchr(char *s, char c)
{
        int i;
	char *address;

	i = 0;
        while (s[i] != '\0')
        {
                if (s[i] == c)
                        address = &s[i];
		else if (s[i] != c)
		{
			address = 0;
		}
                i++;
        }
	return (address);
}

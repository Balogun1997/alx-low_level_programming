#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @str: the string to encode
 *
 * Description: Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 * Return: the encode string
 */
char *leet(char *str)
{
	int i;
	char a;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		a = *(str + i);
		*(str + i) = _1337(a);
	}
	*(str + i) = '\0';
	return (str);
}

/**
 * _1337 - a function that takes a character and returns a character
 * it is mapped to
 *
 * @a: the character to be mapped;
 * Return: the mapped character 
 */

char _1337(char a)
{
	char b = a;

	while (a == 97 || a == 65)
	{
		b = '4';
		break;
	}
	while (a == 101 || a == 69)
	{
		b = '3';
		break;
	}
	while (a == 111 || a == 79)
	{
		b = '0';
		break;
	}
	while (a == 116 || a == 84)
	{
		b = '7';
		break;
	}
	while (a == 108 || a == 76)
	{
		b = '1';
		break;
	}
	return (b);
}

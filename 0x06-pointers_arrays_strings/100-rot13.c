#include "main.h"
/**
 * rot13 -> function that encodes a string
 * @str: the string to be encoded.
 * Return: a pointer to thr encoded string
 */
char *rot13(char *str)
{
	int i;
	int j;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghiklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghiklm";
		for (i = 0; str[i] != '\0'; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (str[i] == data1[j])
				{
					str[i] = datarot[j];
					break;
				}
			}
		}
	return (str);
}

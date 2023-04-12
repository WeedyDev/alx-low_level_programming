#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int s1Length = 0, s2Length = 0, length, i = 0, j;
	char *strConc;

	if (s1 != NULL)
	{
		while (*(s1 + s1Length) != '\0')
			s1Length++;
		s1Length++;
	}
	if (s2 != NULL)
		while (*(s2 + s2Length) != '\0')
			s2Length++;
	length = s1Length + s2Length;
	strConc = malloc((length + 1) * sizeof(char));
	if (strConc == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < s1Length; i++)
			strConc[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (j = 0; j < s2Length; j++, i++)
			strConc[i] = s2[j];
	}
	strConc[length] = '\0';
	return (strConc);
}

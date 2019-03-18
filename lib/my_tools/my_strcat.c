/*
** EPITECH PROJECT, 2017
** my_tools
** File description:
** my_strcat.c
*/

#include "my_tools.h"

char	*my_strcat(char *dest, const char *src)
{
	int i = 0;
	int destlen = my_strlen(dest);

	while (src[i] != '\0') {
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (dest);
}

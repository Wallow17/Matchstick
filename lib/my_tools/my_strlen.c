/*
** EPITECH PROJECT, 2017
** my_tools
** File description:
** my_strlen.c
*/

int	my_strlen(const char *str)
{
	int	a = -1;

	while (str[++a] != '\0');
	return (a);
}
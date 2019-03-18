/*
** EPITECH PROJECT, 2017
** my_tools
** File description:
** my_str_isnum.c
*/

int	my_str_isnum(const char *str)
{
	int	x = -1;

	while (str[++x] != '\0') {
		if (str[x] < '0' || str[x] > '9')
			return (84);
	}
	return (0);
}
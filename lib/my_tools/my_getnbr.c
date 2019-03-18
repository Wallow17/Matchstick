/*
** EPITECH PROJECT, 2017
** my_tools
** File description:
** my_getnbr.c
*/

static int	is_neg(const char *str)
{
	int i = 0;
	int counter = 0;

	while (str[i] > '9' || str[i] < '0') {
		if (str[i] == '-')
			counter = counter + 1;
		i = i + 1;
	}
	if (counter % 2 != 0)
		return (1);
	else
		return (0);
}

static int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c == '+' || c == '-')
		return (2);
	else
		return (0);
}

int	my_getnbr(const char *str)
{
	int i = 0;
	int nbr = 0;

	if (!str)
		return (-1);
	while (is_num(str[i]) == 2)
		i = i + 1;
	while (is_num(str[i]) == 1) {
		nbr = ((nbr * 10) + (str[i] - 48));
		i = i + 1;
	}
	if (is_neg(str) == 1)
		nbr = -nbr;
	return (nbr);
}

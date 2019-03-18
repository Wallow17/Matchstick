/*
** EPITECH PROJECT, 2017
** matchstick
** File description:
** main.c
*/

#include "../include/matchstick.h"
#include "../lib/my_tools/my_tools.h"
#include "../lib/my_printf/my_printf.h"

void	display_usage(void)
{
	my_printf("USAGE\n");
	my_printf("\t./matchstick [-h] <lines> <can_take>\n");
	my_printf("DESCRIPTION\n");
	my_printf("\t<lines>\t\ta number between 1 & 99\n");
	my_printf("\t\t\trepresenting the number of lines of the map\n");
	my_printf("\t<can_take>\ta positive number\n");
	my_printf("\t\t\trepresenting the maximum of matches you can take by turn\n");
}

int	main(int ac, char **av)
{
	if (ac == 2 && my_strcmp(av[1], "-h") == 0)
		return (display_usage(), 0);
	else if (ac != 3) {
		my_printf("Error: %s -h for help\n", av[0]);
		return (84);
	} else
		return (matchstick(av[1], av[2]));
}
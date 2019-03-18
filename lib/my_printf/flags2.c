/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** flags2.c
*/

#include "my_printf.h"

int	flag_b(va_list list)
{
	my_put_nbr_base(va_arg(list, unsigned int), 2);
	return (0);
}

int	flag_o(va_list list)
{
	my_put_nbr_base(va_arg(list, unsigned int), 8);
	return (0);
}

int	flag_u(va_list list)
{
	my_put_nbr_u(va_arg(list, unsigned int));
	return (0);
}

int	flag_x(va_list list)
{
	my_put_nbr_base_hex(va_arg(list, unsigned int), 0);
	return (0);
}

int	flag_x_maj(va_list list)
{
	my_put_nbr_base_hex(va_arg(list, unsigned int), 1);
	return (0);
}
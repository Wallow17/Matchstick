/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** flags.c
*/

#include "my_printf.h"

int	flag_d(va_list list)
{
	my_put_nbr(va_arg(list, int));
	return (0);
}

int	flag_s(va_list list)
{
	my_put_str(va_arg(list, char *));
	return (0);
}

int	flag_c(va_list list)
{
	my_put_char(va_arg(list, int));
	return (0);
}

int	flag_s_maj(va_list list)
{
	my_put_str_np(va_arg(list, char *));
	return (0);
}

int	flag_p(va_list list)
{
	my_put_pointer(va_arg(list, long));
	return (0);
}
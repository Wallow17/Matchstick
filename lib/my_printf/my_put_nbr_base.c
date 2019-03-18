/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_put_nbr_base.c
*/

#include "my_printf.h"

int	my_put_nbr_base(unsigned int nbr, int base)
{
	if (nbr != 0 && base > 0 && base <= 9) {
		my_put_nbr_base(nbr / base, base);
		my_put_char(nbr % base + '0');
	} else
		return (84);
	return (0);
}
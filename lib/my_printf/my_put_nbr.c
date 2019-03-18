/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_put_nbr.c
*/

#include "my_printf.h"

void	my_put_nbr(int nb)
{
	int mod;

	if (nb < 0) {
		my_put_char('-');
		nb = nb * (-1);
	}
	if (nb >= 0) {
		if (nb > 9) {
			mod = (nb % 10);
			nb = (nb - mod) / 10;
			my_put_nbr(nb);
			my_put_char('0' + mod);
		} else
			my_put_char('0' + nb % 10);
	}
}
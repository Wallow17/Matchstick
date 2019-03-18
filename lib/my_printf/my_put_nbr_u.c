/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_put_nbr_u.c
*/

#include "my_printf.h"

int		my_put_nbr_u(unsigned int nb)
{
	int mod = 0;

	if (nb >= 0 && nb <= 9)
		my_put_char(nb + '0');
	else if (nb < 0) {
		nb = nb * -1;
		if (nb >= 0 && nb <= 9)
			my_put_nbr_u(nb);
	}
	else if (nb > 9) {
		my_put_nbr(nb / 10);
		mod = nb % 10;
		my_put_char(mod + '0');
	}
	else
		return (84);
	return (0);
}
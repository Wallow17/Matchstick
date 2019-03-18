/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_put_nbr_base_hex.c
*/

#include "my_printf.h"

int	my_put_nbr_base_hex(unsigned int nbr, int upcase)
{
	if (nbr != 0 && upcase == 0) {
		my_put_nbr_base_hex(nbr / 16, 0);
		if (nbr % 16 <= 9)
			my_put_char(nbr % 16 + '0');
		else if (nbr % 16 > 9)
			my_put_char(nbr % 16 - 10 + 'a');
	}
	else if (nbr != 0 && upcase == 1) {
		my_put_nbr_base_hex(nbr / 16, 1);
		if (nbr % 16 <= 9)
			my_put_char(nbr % 16 + '0');
		else if (nbr % 16 > 9)
			my_put_char(nbr % 16 - 10 + 'A');
	}
	else {
		return (84);
	}
	return (0);
}

int	my_put_nbr_base_hex_adress(long nbr)
{
	if (nbr != 0) {
		my_put_nbr_base_hex_adress(nbr / 16);
		if (nbr % 16 <= 9)
			my_put_char(nbr % 16 + '0');
		else if (nbr % 16 > 9)
			my_put_char(nbr % 16 - 10 + 'a');
	}
	else {
		return (84);
	}
	return (0);
}
/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_put_str_np.c
*/

#include "my_printf.h"

int	my_put_str_np(char const *str)
{
	int a = 0;

	while (str[a] != '\0') {
		if (str[a] < 8) {
			my_put_str("\\00");
			my_put_nbr_base(str[a], 8);
		} else if (str[a] < 32) {
			my_put_str("\\0");
			my_put_nbr_base(str[a], 8);
		} else if (str[a] >= 127) {
			my_put_char('\\');
			my_put_nbr_base(str[a], 8);
		} else
			my_put_char(str[a]);
		a++;
	}
	return (0);
}
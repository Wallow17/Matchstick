/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf.h
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

#include <stdarg.h>

void	my_put_char(char c);
void	my_put_nbr(int nb);
int	my_put_str(char const *str);
int	my_put_str_np(char const *str);
int 	my_put_nbr_u(unsigned int nb);
int 	my_put_nbr_base(unsigned int nbr, int base);
int 	my_put_nbr_base_hex(unsigned int nbr, int upcase);
int 	my_put_nbr_base_hex_adress(long str);
int 	my_put_pointer(long str);
int	my_printf(char *str, ...);

int	flag_d(va_list list);
int	flag_c(va_list list);
int	flag_s(va_list list);
int	flag_s_maj(va_list list);
int	flag_p(va_list list);
int	flag_b(va_list list);
int	flag_o(va_list list);
int	flag_u(va_list list);
int	flag_x(va_list list);
int	flag_x_maj(va_list list);

#endif /* !MY_PRINTF_H_ */
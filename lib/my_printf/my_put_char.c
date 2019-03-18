/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_put_char.c
*/

#include <unistd.h>

void	my_put_char(char c)
{
	write(1, &c, 1);
}
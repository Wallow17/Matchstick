/*
** EPITECH PROJECT, 2017
** matchstick
** File description:
** struct.c
*/

#include "../include/matchstick.h"
#include "../lib/my_printf/my_printf.h"
#include "../lib/my_tools/my_tools.h"

int	struct_get_game(t_game *game, char *arg1, char *arg2)
{
	int	x = -1;

	game->lines = my_getnbr(arg1);
	game->columns = (game->lines * 2) + 1;
	game->can_take = my_getnbr(arg2);
	if (game->lines <= 1 || game->lines > 99 ||
	game->columns <= 0 || game->can_take <= 0)
		return (84);
	if (board_create(game) == 84)
		return (84);
	game->taken = malloc(sizeof(int) * game->lines + 1);
	if (game->taken == NULL)
		return (84);
	while (++x < game->lines + 1)
		game->taken[x] = 0;
	return (0);
}
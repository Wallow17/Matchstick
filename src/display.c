/*
** EPITECH PROJECT, 2017
** matchstick
** File description:
** display.c
*/

#include "../include/matchstick.h"

static void	display_board_border(t_game *game)
{
	int	y = -1;

	while (++y < game->columns)
		write(1, "*", 1);
	write(1, "\n", 1);
}

void	display_board(t_game *game)
{
	int	x = -1;
	int	y = -1;

	display_board_border(game);
	while (++x < game->lines) {
		write(1, "*", 1);
		while (++y < ((game->columns - 2) - game->board[x]) / 2)
			write(1, " ", 1);
		y = -1;
		while (++y < game->board[x] - game->taken[x])
			write(1, "|", 1);
		y = -1;
		while (++y < game->taken[x])
			write(1, " ", 1);
		y = -1;
		while (++y < ((game->columns - 2) - game->board[x]) / 2)
			write(1, " ", 1);
		write(1, "*\n", 2);
		y = -1;
	}
	display_board_border(game);
}
/*
** EPITECH PROJECT, 2017
** matchstick
** File description:
** board.c
*/

#include "../include/matchstick.h"
#include "../lib/my_tools/my_tools.h"
#include "../lib/my_printf/my_printf.h"

int	board_get_line(t_game *game)
{
	char	*str = NULL;

	my_printf("Line: ");
	str = get_next_line(0);
	if (str == NULL)
		return (-1);
	else if (my_str_isnum(str) == 84 || my_strcmp(str, "\0") == 0) {
		my_printf("Error: invalid input (positive number expected)\n");
		return (84);
	}
	game->be_taken_line = my_getnbr(str);
	if (game->be_taken_line < 1 || game->be_taken_line > game->lines) {
		my_printf("Error: this line is out of range\n");
		return (84);
	} else if (game->board[game->be_taken_line - 1] -
	game->taken[game->be_taken_line - 1] == 0) {
		my_printf("Error: not enough matches on this line\n");
		return (84);
	}
	return (0);
}

int	board_get_taken2(t_game *game)
{
	if (game->be_taken_nb > game->can_take) {
		my_printf(
		"Error: you cannot remove more than %d matches per turn\n",
		game->can_take);
		return (84);
	} else if (game->be_taken_nb > game->board[game->be_taken_line - 1]
	- game->taken[game->be_taken_line - 1]) {
		my_printf("Error: not enough matches on this line\n");
		return (84);
	}
	return (0);
}

int	board_get_taken(t_game *game)
{
	char	*str = NULL;

	my_printf("Matches: ");
	str = get_next_line(0);
	if (str == NULL)
		return (-1);
	else if (my_str_isnum(str) == 84 || my_strcmp(str, "\0") == 0) {
		my_printf("Error: invalid input (positive number expected)\n");
		return (84);
	}
	game->be_taken_nb = my_getnbr(str);
	if (game->be_taken_nb == 0) {
		my_printf("Error: you have to remove at least one match\n");
		return (84);
	} else if (game->be_taken_nb < 0) {
		my_printf("Error: invalid input (positive number expected)\n");
		return (84);
	}
	if (board_get_taken2(game) == 84)
		return (84);
	return (0);
}

int	board_create(t_game *game)
{
	int	x = 0;

	game->board = malloc(sizeof(int) * game->lines + 1);
	if (game->board == NULL)
		return (84);
	game->board[0] = 1;
	while (++x < game->lines)
		game->board[x] = game->board[x - 1] + 2;
	return (0);
}

int	board_remaining(t_game *game)
{
	int	remaining = 0;
	int	x = -1;

	while (++x < game->lines)
		remaining += (game->board[x] - game->taken[x]);
	return (remaining);
}
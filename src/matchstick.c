/*
** EPITECH PROJECT, 2017
** matchstick
** File description:
** matchstick.c
*/

#include "../include/matchstick.h"
#include "../lib/my_printf/my_printf.h"

void	my_ai(t_game *game)
{
	int	remaining = board_remaining(game);

	game->be_taken_line = game->lines;
	game->be_taken_nb = game->can_take;
	while (game->board[game->be_taken_line - 1] -
	game->taken[game->be_taken_line - 1] == 0)
		game->be_taken_line--;
	while (game->board[game->be_taken_line - 1] -
	game->taken[game->be_taken_line - 1] < game->be_taken_nb)
		game->be_taken_nb--;
	if (game->board[game->be_taken_line - 1] -
	game->taken[game->be_taken_line - 1] == remaining
	&& remaining > 1 && remaining <= game->be_taken_nb)
		game->be_taken_nb = remaining - 1;
}

int	turn(t_game *game, int player)
{
	int	err = 0;

	if (player == 1) {
		my_printf("Your turn:\n");
		while ((err = board_get_line(game)) == 84);
		if (err == -1)
			return (-1);
		while ((err = board_get_taken(game)) == 84);
		if (err == -1)
			return (-1);
		my_printf("Player removed %d match(es) from line %d\n",
		game->be_taken_nb, game->be_taken_line);
	} else if (player == 2) {
		my_printf("AI's turn...\n");
		my_ai(game);
		my_printf("AI removed %d match(es) from line %d\n",
		game->be_taken_nb, game->be_taken_line);
	}
	game->taken[game->be_taken_line - 1] += game->be_taken_nb;
	display_board(game);
	my_put_char('\n');
	return (0);
}

int	switch_player()
{
	static int	player = 1;

	if (player == 1)
		return (player++);
	else
		return (player--);
}

int	matchstick(char *arg1, char *arg2)
{
	int	player = -1;
	t_game	game;

	if (struct_get_game(&game, arg1, arg2) == 84)
		return (84);
	display_board(&game);
	my_put_char('\n');
	while (board_remaining(&game) != 0) {
		if (turn(&game, (player = switch_player())) == 0);
		else
			return (0);
	}
	free(game.board);
	free(game.taken);
	if (player == 2)
		return (my_printf("I lost... snif... but I'll get you next time!!\n"), 1);
	else if (player == 1)
		return (my_printf("You lost, too bad...\n"), 2);
	else
		return (84);
}
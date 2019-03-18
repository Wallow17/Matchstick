/*
** EPITECH PROJECT, 2017
** matchstick
** File description:
** matchstick.h
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_

#include <stdlib.h>
#include <unistd.h>

typedef struct 	s_game {
	int	lines;
	int	columns;
	int	can_take;
	int	be_taken_line;
	int	be_taken_nb;
	int	*board;
	int	*taken;
}		t_game;

void	display_board(t_game *game);
int	matchstick(char *arg1, char *arg2);
int	struct_get_game(t_game *game, char *arg1, char *arg2);
int	board_create(t_game *game);
void	board_remove_matches(t_game *game);
int	board_get_line(t_game *game);
int	board_get_taken(t_game *game);
int	board_remaining(t_game *game);

#endif /* !MATCHSTICK_H_ */
/*
** EPITECH PROJECT, 2017
** my_tools
** File description:
** get_next_line.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_tools.h"

static t_list	*elem = NULL;

static int	add_elem(const char c)
{
	t_list	*new;
	t_list	*tmp;

	if ((new = malloc(sizeof(*new))) != NULL) {
		new->c = c;
		new->next = NULL;
		if (elem != NULL) {
			tmp = elem;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new;
		} else
			elem = new;
		return (0);
	} else
		return (1);
}

static int	is_line(void)
{
	t_list	*tmp = elem;

	while (tmp && tmp->c) {
		if (tmp->c == '\0' || tmp->c == '\n')
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

static int	get_size(void)
{
	int	size = 0;
	t_list	*tmp = elem;

	while (tmp && tmp->c && tmp->c != '\0' && tmp->c != '\n') {
		tmp = tmp->next;
		size += 1;
	}
	return (size);
}

static char	*convert(void)
{
	int	i[2] = {get_size(), 0};
	t_list	*tmp = elem;
	char	*str;

	if ((str = malloc(i[0] + 1)) != NULL) {
		while (i[1] < i[0] && elem && elem->c) {
			str[i[1]++] = elem->c;
			tmp = elem;
			elem = elem->next;
			free(tmp);
		}
		if (elem) {
			tmp = elem;
			elem = elem->next;
			free(tmp);
		}
		str[i[1]] = '\0';
		return (str);
	} else
		return (NULL);
}

char	*get_next_line(const int fd)
{
	int	i = -1;
	int	rd;
	char	buffer[READ_SIZE];

	if (!is_line())
		return (convert());
	else if ((rd = read(fd, buffer, READ_SIZE)) <= 0)
		return (elem != NULL ? convert() : NULL);
	else {
		while (++i < rd)
			if (add_elem((const char)buffer[i]))
				return (NULL);
		if (!is_line())
			return (convert());
	}
	return (get_next_line(fd));
}
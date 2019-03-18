/*
** EPITECH PROJECT, 2018
** my_tools
** File description:
** my_tools.h
*/

#ifndef MY_TOOLS_H_
#define MY_TOOLS_H_

#ifndef READ_SIZE
#define READ_SIZE (64)
#endif /* !READ_SIZE */

typedef struct	s_list {
	char 		c;
	struct s_list 	*next;
}		t_list;

char	*get_next_line(const int fd);
int	my_strlen(const char *str);
int	my_getnbr(const char *str);
int	my_str_isnum(const char *str);
int	my_strlen(const char *str);
int	my_strcmp(const char *s1, const char *s2);
char	*my_strcat(char *dest, const char *src);

#endif /* !TOOLS_H_ */

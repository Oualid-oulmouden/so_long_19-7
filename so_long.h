/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:19:33 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/07/19 17:55:31 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
#  define BUFFER_SIZE 10

#include "so_long.h"
#include "mlx_linux/mlx.h"
#include "mlx_linux/mlx_int.h"
#define W 119

// palyer struct
typedef struct s_player
{
	int	    player_width;
    int     player_height;
    int     number_mouves;
}			t_player;

// map struct
typedef struct s_map
{
	char	    **map;
    int         map_x;
    int         map_y;
}			t_map;

// check_map.c
int rectangle_map(char **str);

// number_elements.c
int number_of_players(char **str);
int number_of_collectifs(char **str);
int number_of_exits(char **str);

// check_element.c
int check_wall(char **str);
int check_empty(char **str);
int check_collects(char **str);
int check_player(char **str);
int check_exit(char **str);

//split
char	*copy(const char *s, int j, int k);
int	coun_word(char const *s, char c);
void	free_memory(char **s);
char	**fill_space(char const *s, char c, char **split);
char	**ft_split(char const *s, char c);

// utile_functions.c
char    *ft_strdup(char *str);
size_t	ft_strlen(char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*concatenate(char *s1, char *s2);

// read_map.c
char *get_next_line(int fd);
char    **read_map(char *path);

// main.c
int	main();

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:19:28 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/07/19 09:34:47 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx_linux/mlx.h"
#include "mlx_linux/mlx_int.h"

// int	key_hook(int keycode)
// {
// 	printf("key = \"%d\"!\n",keycode);

// 	return (0);
// }

// int	main(int ac,char *av[])
// {
// 	// if(ac == 2)
// 	// {
// 	// 	if(rectangle_map(av))
// 	// 		return 1;
// 	// 	else if(number_of_collectifs(av) > 1 || number_of_exits(av) > 1 || number_of_players(av) > 1)
// 	// 		return 1;
		
// 	// }
// 	// void *mlx = mlx_init();
// 	// void *win = mlx_new_window(mlx, 640, 480, "Hello world!");
// 	// t_map s;
// 	// 	mlx_key_hook(win, key_hook, &s);
// 	// mlx_loop(mlx);
// }

int main()
{
	char *path;
	char **map;
	
	path = "map.ber";
	map = read_map(path);
	
	int i = 0;
	while(map[i])
	{
		printf("%s",map[i]);
		i++;
	}
}


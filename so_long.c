// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   so_long.c                                          :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/07/18 10:12:19 by ooulmoud          #+#    #+#             */
// /*   Updated: 2024/07/18 11:12:45 by ooulmoud         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "so_long.h"
// #include "mlx_linux/mlx.h"
// #include "mlx_linux/mlx_int.h"

// void fill_map(char **str)
// {
//     void	*mlx;
    
// 	mlx = mlx_init();
// 	img1 = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
// 	img2 = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
// 	img3 = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
// 	img4 = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
// 	img5 = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);

//     int i = 0;
//     int j = 0;
    
//     while(str[i])
//     {
//         j = 0;
//         while(str[i][j])
//         {
//             if(str[i][j] == '1')
//                 mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
//             else if(str[i][j] == '0')
//                 mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
//             else if(str[i][j] == 'E')
//                 mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
//             else if(str[i][j] == 'P')
//                 mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
//             else if(str[i][j] == 'C')
//                 mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
//         j++;
//         }
//     i++;
//     }
// }


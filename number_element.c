/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:44:50 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/07/18 10:51:06 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx_linux/mlx.h"
#include "mlx_linux/mlx_int.h"

int number_of_players(char **str)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(str[i])
    {
        j = 0;
        while(str[i][j])
        {
            if(str[i][j] == 'P')
                k++;
        j++;
        }
    i++;    
    }
    return k;   
}

int number_of_collectifs(char **str)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(str[i])
    {
        j = 0;
        while(str[i][j])
        {
            if(str[i][j] == 'C')
                k++;
        j++;
        }
    i++;    
    }
    return k;   
}

int number_of_exits(char **str)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(str[i])
    {
        j = 0;
        while(str[i][j])
        {
            if(str[i][j] == 'E')
                k++;
        j++;
        }
    i++;    
    }
    return k;   
}
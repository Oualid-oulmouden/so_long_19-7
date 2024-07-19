/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_element.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:38:58 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/07/19 18:16:21 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx_linux/mlx.h"
#include "mlx_linux/mlx_int.h"

int check_wall(char **str)
{
    int i = 0;
    int j = 0;
    
    while(str[i])
    {
        j = 0;
        while(str[i][j])
        {
            if(str[i][j] == '1')
                return 1;
        j++;
        }
    i++;    
    }
    return 0;
}

int check_empty(char **str)
{
    int i = 0;
    int j = 0;
    
    while(str[i])
    {
        j = 0;
        while(str[i][j])
        {
            if(str[i][j] == '0')
                return 1;
        j++;
        }
    i++;    
    }
    return 0;
}

int check_collects(char **str)
{
    int i = 0;
    int j = 0;
    
    while(str[i])
    {
        j = 0;
        while(str[i][j])
        {
            if(str[i][j] == 'C')
                return 1;
        j++;
        }
    i++;    
    }
    return 0;
}

int check_player(char **str)
{
    int i = 0;
    int j = 0;
    
    while(str[i])
    {
        j = 0;
        while(str[i][j])
        {
            if(str[i][j] == 'P')
                return 1;
        j++;
        }
    i++;    
    }
    return 0;
}

int check_exit(char **str)
{
    int i = 0;
    int j = 0;
    
    while(str[i])
    {
        j = 0;
        while(str[i][j])
        {
            if(str[i][j] == 'E')
                return 1;
        j++;
        }
    i++;    
    }
    return 0;
}


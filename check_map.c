/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 19:59:36 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/07/19 18:39:13 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx_linux/mlx.h"
#include "mlx_linux/mlx_int.h"

int handle_null(char **str)
{
    if(!str || !*str)
        return 1;
    else
        return 0;
}

int rectangle_map(char **str)
{
    int i = 0;
    
    while(str[i])
    {
        if(ft_strlen(str[0]) != ft_strlen(str[i]))
            return 1;
        i++;
    }
    return 0;
}

int valid1(char **str)
{
    int i = 0;
    int j = 0;

    while(str[i] != NULL)
    {
        if(i == 0)
        {
            j = 0;
            while(str[i][j] != '\0')
            {
                if(str[i][j] == '0')
                    return 1;
            j++;
            }
        }
    i++;
    }
    return 0;
}

int valid2(char **str)
{
    int i = 0;
    int j = 0;
    int l = cl(str) - 1;

    while(str[i] != NULL)
    {
        if(i == l)
        {
            j = 0;
            while(str[i][j] != '\0')
            {
                if(str[i][j] == '0')
                    return 1;
            j++;
            }
        }
    i++;
    }
    return 0;
}

int valid3(char **str)
{
    int i = 0;
    int j = 0;
    int l;

    while(str[i] != NULL)
    {
        l = ft_strlen(str[i]) - 1;
        if(str[i][0] != '1' ||  str[i][l] != '1')
            return 1;
    i++;
    }
    return 0;
}

void fill(char **str,t_point size,t_point cur,char to_fill)
{
        if(cur.x < 0 || cur.y < 0 || cur.x >= size.x || cur.y >= size.y || to_fill != str[cur.y][cur.x])
                return;
        str[cur.y][cur.x] = '8';
        fill(str,size,(t_point){cur.x + 1,cur.y},to_fill);
        fill(str,size,(t_point){cur.x - 1,cur.y},to_fill);
        fill(str,size,(t_point){cur.x,cur.y + 1},to_fill);
        fill(str,size,(t_point){cur.x,cur.y - 1},to_fill);
}

void flood_fill(char **str ,t_point size,t_point begin)
{
        fill(str,size,begin,str[begin.y][begin.x]);
}
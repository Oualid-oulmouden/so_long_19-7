/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utile_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 09:46:09 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/07/19 16:01:25 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx_linux/mlx.h"
#include "mlx_linux/mlx_int.h"

int c_lines(char **str)
{
    int i = 0;
    int j = 0;

    while(str[i])
    {
        j = 0;
        while(str[i][j])
            j++;
    i++;
    }
    return i;
}

char    *ft_strdup(char *str)
{
    int i = 0;
    char *tab;
    
    if(str == NULL)
        return (NULL);
    while(str[i])
        i++;
    tab = malloc(sizeof(char)*(i + 1));
    if(tab ==  NULL)
        return (NULL);
    i = 0;
    while(str[i])
    {
        tab[i] = str[i];
        i++;
    }
    tab[i] = '\0';
    return(tab);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	if (!s2)
		return (NULL);
	return (concatenate(s1, s2));
}

char	*concatenate(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s)
		return (s);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	if (s1)
		free(s1);
	s[i] = '\0';
	return (s);
}
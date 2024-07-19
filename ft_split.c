/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:04:09 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/07/18 10:24:49 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx_linux/mlx.h"
#include "mlx_linux/mlx_int.h"

char	*copy(const char *s, int j, int k)
{
	char	*str;
	int		i;

	str = (char *)calloc((k - j + 1), 1);
	if (!str)
		return (NULL);
	i = 0;
	while (j < k)
	{
		str[i] = s[j];
		i++;
		j++;
	}
	return (str);
}

int	coun_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

void	free_memory(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**fill_space(char const *s, char c, char **split)
{
	int		j;
	int		k;
	int		i;

	i = 0;
	j = 0;
	k = 0;
	while (i < coun_word(s, c))
	{
		while (s[j] == c)
			j++;
		k = j;
		while (s[k] != c && s[k])
			k++;
		split[i] = copy(s, j, k);
		j = k;
		if (!split[i++])
		{
			free_memory(split);
			return (NULL);
		}
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (s == NULL)
		return (NULL);
	split = (char **)calloc((coun_word(s, c) + 1), sizeof(char *));
	if (!split)
		return (NULL);
	return (fill_space(s, c, split));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 09:47:58 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/07/19 09:33:57 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx_linux/mlx.h"
#include "mlx_linux/mlx_int.h"

char *get_next_line(int fd)
{
	int r;
	char *line;
	char buff;
	int i;

	i = 0;
	r = 1;
	buff = 0;
	fd = 0;
	line = malloc(sizeof(char)*10000);
	while(line)
	{
		if(r > 0)
			r = read(1,&buff,1);
		line[i] = buff;
		if(line[i] == '\0')
			break;
	i++;
	}
	line[i] = '\0';
	return(line);
}

char	**read_map(char *path)
{
	char	*buff;
	char 	*aid;
	char	*line;
	char	**str;

	int fd = open(path,O_RDONLY);
	if(fd == -1)
		return 0;
	buff = ft_strdup("");
	if (!buff)
		return (NULL);
	while (1)
	{
		line = get_next_line(fd);
		if(!line)
			break;
		aid = buff;
		buff = ft_strjoin(line,aid);
		free(aid);
	}
	str = ft_split(line,'\n');
	free(buff);
	return (str);
}

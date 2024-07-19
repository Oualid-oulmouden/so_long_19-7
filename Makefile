# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/22 17:52:48 by ooulmoud          #+#    #+#              #
#    Updated: 2024/07/19 09:40:36 by ooulmoud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -lmlx -lXext -lX11

NAME = main

files_c = main.c \
		check_map.c \
		check_element.c \
		number_element.c \
		read_map.c \
		ft_split.c \
		utile_functions.c 

files_o = $(files_c:.c=.o)

all: $(NAME)

$(NAME): $(files_o)
	$(CC) $(CFLAGS) $(files_o) -o $@ $(LDFLAGS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(files_o)

fclean: clean
	rm -f $(NAME)

re: fclean all

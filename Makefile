# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/29 21:46:34 by sagemura          #+#    #+#              #
#    Updated: 2023/07/02 17:30:31 by sagemura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c


OBJS = $(SRCS:.c=.o)


CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar

LINFT = libft/libft.al
LFLAGS = -Llibft -lft

all: $(NAME)


$(NAME): $(OBJS)
	$(AR) rcs $@ $^


$(LIBFT)
	make -C libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

	
clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re bonus
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/08 14:12:57 by user42            #+#    #+#              #
#    Updated: 2020/12/10 13:15:05 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = clang
CFLAGS = -Wall -Wextra -Werror
LIBFT = -L./libft -lft
RM = rm -f

SRCS = flag_parse.c ft_printf.c ft_itoa_dot.c ft_un_itoa_dot.c ft_un_itoa_base_dot.c \
		ft_ptr_itoa_dot.c handle_char.c handle_int.c handle_p.c handle_str.c handle_u.c\
		handle_x.c utilities.c handle_percent.c

OBJS = ${SRCS:.c=.o}

all : $(NAME)

$(NAME) : $(OBJS)
		$(MAKE) bonus -C ./libft
		cp ./libft/libft.a $(NAME)
		ar rcs $(NAME) $(OBJS)

%.o:%.c
		$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re : fclean all

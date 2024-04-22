# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekoubbi <ekoubbi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 16:05:24 by ekoubbi           #+#    #+#              #
#    Updated: 2024/04/11 15:22:40 by ekoubbi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	push_swap.c\
		utils.c\
		swap.c\
		push.c\
		rotate.c\
		reverse_rotate.c\
		utils2.c

FT 			= libft
LIBFT		= $(FT)/libft.a
	
CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror -g
OBJ 		= $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

$(LIBFT): $(FT)
	$(MAKE) bonus -C $(FT)

$(FT) :
	/libft/

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ) $(OBJ_B)
	$(MAKE) clean -C $(FT)

fclean : clean
	rm -f $(NAME)
	rm -f $(LIBFT)

re : fclean all

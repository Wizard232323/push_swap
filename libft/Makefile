# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekoubbi <ekoubbi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 19:28:00 by ekoubbi           #+#    #+#              #
#    Updated: 2024/02/26 20:00:16 by ekoubbi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_printf/ft_printf.c\
		ft_printf/ft_printfaddon.c\
		get_next_line/get_next_line.c\
		get_next_line/get_next_line_utils.c\
		ft_toupper.c

SRC_B = ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstclear.c

CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror -g
OBJ 		= $(SRC:.c=.o)
OBJ_B		= $(SRC_B:.c=.o) 
NAME		= libft.a

all: $(NAME)

bonus : $(OBJ_B) $(OBJ)
	ar crs $(NAME) $(OBJ_B) $(OBJ)

$(NAME) : $(OBJ)
	ar crs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ) $(OBJ_B)

fclean : clean
	rm -f $(NAME)

re : fclean all

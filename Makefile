# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asouchet <asouchet@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 20:22:50 by asouchet          #+#    #+#              #
#    Updated: 2022/09/10 21:49:37 by asouchet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a

SRCS	:=ft_atoi.c ft_isalpha.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_calloc.c \
		ft_strnstr.c ft_strchr.c ft_strrchr.c ft_memcpy.c ft_strdup.c ft_bzero.c \
		ft_strlcpy.c ft_strlcat.c ft_memmove.c ft_isprint.c ft_memset.c ft_strlen.c \
		ft_strncmp.c ft_toupper.c ft_tolower.c ft_calloc.c ft_memchr.c ft_memcmp.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS	:= $(SRCS:.c=.o)

CC			:= gcc
CFLAGS	:= -Wall -Wextra -Werror

RM			:= rm -f

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)
clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: 	fclean all

.PHONY: all clean fclean re
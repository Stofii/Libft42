# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dstopfer <dstopfer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/26 18:33:24 by dstopfer          #+#    #+#              #
#    Updated: 2022/04/03 18:35:36 by dstopfer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isdigit.c ft_memset.c ft_isprint.c\
ft_strlcat.c ft_atoi.c ft_itoa.c\
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_strlen.c\
ft_toupper.c ft_memchr.c ft_isalnum.c\
ft_memcmp.c ft_strncmp.c ft_isalpha.c ft_strchr.c\
ft_strnstr.c ft_isascii.c ft_strrchr.c ft_tolower.c\
ft_memcpy.c ft_memmove.c ft_calloc.c ft_strdup.c\
ft_substr.c ft_strjoin.c ft_strtrim.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
ft_split.c ft_strmapi.c ft_striteri.c

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c\
ft_lstsize.c ft_lstlast.c ft_lstdelone.c ft_lstmap.c\
ft_lstclear.c ft_lstiter.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRC:.c=.o)

CC = gcc

CFLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
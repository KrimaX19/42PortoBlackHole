# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 18:16:48 by rusoares          #+#    #+#              #
#    Updated: 2023/11/16 18:16:48 by rusoares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c \
ft_toupper.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_tolower.c \
ft_toupper.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri.c

OBJS = $(SRCS:.c=.o)

BONUS = ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c

BONUS_OBJS = $(BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -c
NAME = libft.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


bonus: $(BONUS_OBJS)
		ar rcs $(NAME) $(BONUS_OBJS)

.PHONY:all bonus clean fclean re

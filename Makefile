# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 13:45:19 by omadali           #+#    #+#              #
#    Updated: 2024/10/19 12:46:25 by idkahram         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

AR = ar rcs

FLAGS = -g -Wextra -Wall -Werror

SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_memset.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_split.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strncmp.c
OBJS=$(SRCS:.c=.o)

$(NAME): $(OBJS)
	@$(AR)  $(NAME) $(OBJS) 
	@echo "OLMAK" 
%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	@rm -f $(OBJS)
	@echo "GREAT"

fclean: clean
	@rm -f $(NAME)
	@echo "NICE"
re :fclean all

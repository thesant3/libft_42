# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 13:32:52 by sgomez-m          #+#    #+#              #
#    Updated: 2025/05/23 20:56:52 by sgomez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#library file's name
NAME = libft.a

#compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

#source files and object files
SRC =	ft_bzero.c \
		ft_atoi.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c	\
		ft_memcpy.c	\
		ft_memmove.c \
		ft_memset.c	\
		ft_strchr.c	\
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c	\
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_calloc.c	\
		ft_strdup.c	\
		ft_substr.c	\
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c \

SRC_BONUS = ft_lstnew_bonus.c \
	    ft_lstadd_front_bonus.c \
	    ft_lstsize_bonus.c \
	    ft_lstlast_bonus.c \
	    ft_lstadd_back_bonus.c \
	    ft_lstdelone_bonus.c \
	    ft_lstclear_bonus.c	\
	    ft_lstiter_bonus.c 	\
	    ft_lstmap_bonus.c 	\

OBJ = $(SRC:%.c=%.o)

OBJ_BONUS = $(SRC_BONUS:%.c=%.o)

#make library and delete files
AR = ar rcs 
RM = rm -rf

#target and dependcies
#rule to compile everything
all: $(NAME)

#rule to make the library
$(NAME):  $(OBJ)
	$(AR) $(NAME) $(OBJ)

#.c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# #.c to .o bonus
# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ) $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)

#Delete all .o file
clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

#delete all .o and .a files
fclean: clean
	$(RM) $(NAME)

re: fclean all

#indicate that the next rules are not real files
.PHONY: all bonus clean fclean re

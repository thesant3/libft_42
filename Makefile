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
NAME = $(BIN_DIR)libft.a

#dir for .h files
INC_DIR =./inc
#dir for .o files
OBJ_DIR = ./obj
#dir for .c files
SRC_DIR = ./src
#dir for .a file
BIN_DIR = ./bin
#dir for bonus .c
BONUS_DIR = ./bonus
#dir for bonus .o
BON_OBJ_DIR = ./bonus_obj

#compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

#source files and object files
SRC =	$(SRC_DIR)ft_bzero.c \
		$(SRC_DIR)ft_atoi.c \
		$(SRC_DIR)ft_isalnum.c \
		$(SRC_DIR)ft_isalpha.c \
		$(SRC_DIR)ft_isascii.c \
		$(SRC_DIR)ft_isdigit.c \
		$(SRC_DIR)ft_isprint.c \
		$(SRC_DIR)ft_memchr.c \
		$(SRC_DIR)ft_memcmp.c	\
		$(SRC_DIR)ft_memcpy.c	\
		$(SRC_DIR)ft_memmove.c \
		$(SRC_DIR)ft_memset.c	\
		$(SRC_DIR)ft_strchr.c	\
		$(SRC_DIR)ft_strlcat.c \
		$(SRC_DIR)ft_strlcpy.c \
		$(SRC_DIR)ft_strlen.c	\
		$(SRC_DIR)ft_strncmp.c \
		$(SRC_DIR)ft_strnstr.c \
		$(SRC_DIR)ft_strrchr.c \
		$(SRC_DIR)ft_tolower.c \
		$(SRC_DIR)ft_toupper.c \
		$(SRC_DIR)ft_calloc.c	\
		$(SRC_DIR)ft_strdup.c	\
		$(SRC_DIR)ft_substr.c	\
		$(SRC_DIR)ft_strjoin.c \
		$(SRC_DIR)ft_strtrim.c \
		$(SRC_DIR)ft_strmapi.c \
		$(SRC_DIR)ft_itoa.c \
		$(SRC_DIR)ft_striteri.c \
		$(SRC_DIR)ft_putchar_fd.c \
		$(SRC_DIR)ft_putstr_fd.c \
		$(SRC_DIR)ft_putendl_fd.c \
		$(SRC_DIR)ft_putnbr_fd.c \
		$(SRC_DIR)ft_split.c \

SRC_BONUS = $(BONUS_DIR)ft_lstnew_bonus.c \
	    $(BONUS_DIR)ft_lstadd_front_bonus.c \
	    $(BONUS_DIR)ft_lstsize_bonus.c \
	    $(BONUS_DIR)ft_lstlast_bonus.c \
	    $(BONUS_DIR)ft_lstadd_back_bonus.c \
	    $(BONUS_DIR)ft_lstdelone_bonus.c \
	    $(BONUS_DIR)ft_lstclear_bonus.c	\
	    $(BONUS_DIR)ft_lstiter_bonus.c 	\
	    $(BONUS_DIR)ft_lstmap_bonus.c 	\

OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJ_BONUS = $(SRC_BONUS:$(BONUS_DIR)/%.c=$(BON_OBJ_DIR)/%.o)

#make library and delete files
AR = ar rcs 
RM = rm -rf

#target and dependcies
#rule to compile everything
all: $(NAME)

#rule to make the library
$(NAME) : $(OBJ)
	mkdir -p $(BIN_DIR)
	$(AR) $(NAME) $(OBJ)

#rule to make the library and the bonus
bonus: $(OBJ) $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)

#.c to .o - src
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) -MD $(CFLAGS) -c $< -o $@

-include $(OBJ_DIR)/*.d

#.c to .o - bonus
$(BON_OBJ_DIR)/%.o: $(BONUS_DIR)/%.c
	mkdir -p $(BON_OBJ_DIR)
	$(CC) -MD $(CFLAGS) -c $< -o $@

#Delete all .o file
clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

#delete all .o and .a files
fclean: clean
	$(RM) $(NAME)

re: fclean all

#indicate that the next rules are not real files
.PHONY: all bonus clean fclean re

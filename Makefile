# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 13:32:52 by sgomez-m          #+#    #+#              #
#    Updated: 2025/05/15 22:58:46 by sgomez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#library file's name
NAME = libft.a

SRCDIR = src/
OBJDIR = obj/

#compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

#source files and object files
SRC =	$(SRCDIR)ft_bzero.c		\
		$(SRCDIR)ft_atoi.c	\
		$(SRCDIR)ft_isalnum.c	\
		$(SRCDIR)ft_isalpha.c	\
		$(SRCDIR)ft_isascii.c	\
		$(SRCDIR)ft_isdigit.c	\
		$(SRCDIR)ft_isprint.c	\
		$(SRCDIR)ft_memchr.c 	\
		$(SRCDIR)ft_memcmp.c	\
		$(SRCDIR)ft_memcpy.c	\
		$(SRCDIR)ft_memmove.c	\
		$(SRCDIR)ft_memset.c	\
		$(SRCDIR)ft_strchr.c	\
		$(SRCDIR)ft_strlcat.c	\
		$(SRCDIR)ft_strlcpy.c	\
		$(SRCDIR)ft_strlen.c	\
		$(SRCDIR)ft_strncmp.c	\
		$(SRCDIR)ft_strnstr.c 	\
		$(SRCDIR)ft_strrchr.c	\
		$(SRCDIR)ft_tolower.c	\
		$(SRCDIR)ft_toupper.c	\
		$(SRCDIR)ft_calloc.c	\
		$(SRCDIR)ft_strdup.c	\
		$(SRCDIR)ft_substr.c	\
		$(SRCDIR)ft_strjoin.c	\
		$(SRCDIR)ft_strtrim.c	\
		$(SRCDIR)ft_strmapi.c	\
		$(SRCDIR)ft_itoa.c	\
		$(SRCDIR)ft_striteri.c	\
		$(SRCDIR)ft_putchar_fd.c\
		$(SRCDIR)ft_putstr_fd.c	\
		$(SRCDIR)ft_putendl_fd.c \
		$(SRCDIR)ft_putnbr_fd.c	 \
		$(SRCDIR)ft_split.c	\


#
OBJ = $(SRC:$(SRCDIR)%.c=$(OBJDIR)%.o)

#Header file
INCLUDE = include

#make library and delete files
AR = ar rcs 
RM = rm -rf

#target and dependcies
#rule to compile everything

#indicate that the next rules are not real files
.PHONY: all clean fclean re

all: $(NAME)

$(OBJDIR):
	mkdir $@

#rule to make the library
$(NAME): $(OBJDIR) $(OBJ)
	$(AR) $(NAME) $(OBJ)

#.c to .o
$(OBJDIR)%.o: $(SRCDIR)%.c
	$(CC) $(CFLAGS) -I ./$(INCLUDE) -c $< -o $@

#Delete all .o file
clean:
	$(RM) $(OBJDIR)

#delete all .o and .a files
fclean: clean
	$(RM) $(NAME)

re: fclean all

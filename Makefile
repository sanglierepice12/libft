# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gostr <gostr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 11:46:35 by gostr             #+#    #+#              #
#    Updated: 2023/11/17 10:26:33 by gostr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -I. -I./$(INCDIR)
RM		=	rm -f

NAME	=	libft

SRCFOL	=	atoi.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_toupper.c\
			bzero.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_strlcpy.c\
			ft_tolower.c\
			strchr.c\
			memset.c\
			
SRC		=	$(wildcard $(SRCFOL)*.c)

OBJDIR	=	ofiles/
OBJS	=	$(patsubst $(SRC)%.c,$(OBJDIR)%.o,$(SRC))

INCFOL	=	include/libft.h
INC		=	$(wildcard $(INCFOL)*.h)

## actions
all: $(NAME)

# Generates output file
$(NAME): $(OBJS)
	$(HIDE)$(CC) $(CFLAGS) -o $@ $^

# Compiles sources into objects
$(OBJS): $(OBJDIR)%.o : $(SRCDIR)%.c $(INC) | $(OBJDIR)
	$(HIDE)$(CC) $(CFLAGS) -c $< -o $@

# Creates directory for binaries
$(OBJDIR):
	$(HIDE)mkdir -p $@

# Removes objects
clean:
	$(HIDE)$(RM) $(OBJS)

# Removes objects and executables
fclean: clean
	$(HIDE)$(RM) $(NAME)

# Removes objects and executables and remakes
re: fclean all

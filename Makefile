CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

NAME = libft.a
EXEC = main.out
SRC =	$(wildcard *.c)
OBJDIR =	ofiles/
OBJS =	$(addprefix $(OBJDIR), $(SRC:.c=.o))

INC =	-I./

all:	$(NAME) $(EXEC)

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJDIR)%.o: %.c | $(OBJDIR)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(EXEC):	$(OBJS)
	$(CC) $(CFLAGS) $(INC) -o $(EXEC) $(OBJS)

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	$(RM) -r $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

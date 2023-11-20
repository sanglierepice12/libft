CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

NAME = libft.a

SRC = $(wildcard *.c)
OBJDIR = ofiles/
OBJS = $(addprefix $(OBJDIR), $(SRC:.c=.o))

INC = -Iinclude/

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJDIR)%.o: %.c | $(OBJDIR)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	$(RM) -r $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

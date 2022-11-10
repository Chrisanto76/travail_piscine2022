NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

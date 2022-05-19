SRC_PART = ./ft_printf.c ./ft_putchar_fd.c ./ft_putnbtr.c ./ft_putpointer.c ./ft_putstr_fd.c ./ft_putnbr_fd.c
NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
CC = gcc -c
HDRS = ft_printf.h
OBJ_PART = $(SRC_PART:.c=.o)

%.o:%.c
	gcc -Wall -Wextra -Werror -o $@ -c $<

$(NAME): $(OBJ_PART) $(HDRS)
	$(CC) $(SRC_PART) $(FLAGS)
	ar r $(NAME) $(OBJ_PART)

all: $(NAME)

clean:
	rm -f $(OBJ_PART)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

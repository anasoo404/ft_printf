NAME = libftprintf.a

SRCS = ft_printf.c \
	  ft_printf_utils.c \
	  print_char.c \
	  print_str.c \
	  print_addr.c \
	  print_nbr.c \

OBJ = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

NAME = libftprintf.a

SRCS = \
ft_printf.c \
ft_putchar.c \
ft_putstr.c	\
ft_putnbr_base.c \
ft_putptr.c \

OBJECTS = $(SRCS:.c=.o)

HEADER = ft_printf.h

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar -rsc $(NAME) $(OBJECTS)
	$(info CREATED $(NAME))

%.o: %.c
	@cc $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean:
	@rm -f $(OBJECTS)
	$(info DELETED $(OBJECTS))

fclean: clean
	@rm -f $(NAME)
	$(info DELETED $(NAME))

re: fclean all

.PHONY: all clean fclean re

SRCS		=	./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
					./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJS        :=  $(SRCS:.c=.o)

CC          = cc

RM          = rm -f

CFLAGS      = -Wall -Werror -Wextra -I.

NAME        = libft.a

all:        $(NAME)


$(NAME):    $(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:     clean
				$(RM) $(NAME)

re:         fclean $(NAME)

.PHONY:     all clean fclean re
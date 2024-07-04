SRCS        =   main.c

OBJS        :=  $(SRCS:.c=.o)

CC          = cc

RM          = rm -f

CFLAGS      = -Wall -Werror -Wextra -I. -o $(NAME)

NAME        = ft_display_file

all:        $(NAME)

$(NAME):    $(OBJS)
		$(CC) $(CFLAGS) $(OBJS)
clean:
		$(RM) $(OBJS)

fclean:     clean
		$(RM) $(NAME)

.PHONY:     all clean fclean
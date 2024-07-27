NAME  = libft.a
PATH_SRC = srcs/
HEADER = includes
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_swap.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_strcmp.c
OBJS       = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $@ $<

$(PATH_SRC)%.o: $(PATH_SRC)%.c
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@
	
clean :
	rm -f $(OBJS)

fclean : 
	make clean
	rm -f $(NAME)

re : 
	make fclean
	make all

.PHONY : all clean fclean re

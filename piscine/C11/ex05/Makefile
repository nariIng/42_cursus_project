NAME   = do-op
CC     = cc
PATH_SRC = srcs/
CFLAGS = -Wall -Wextra -Werror
HEADERS = includes/
SRC = $(PATH_SRC)ft_atoi.c $(PATH_SRC)ft_do_op.c $(PATH_SRC)ft_putnbr.c $(PATH_SRC)ft_strlen.c

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I $(HEADERS)

clean : 
	rm -f $(NAME)
	
fclean : 
	make clean
	
re : fclean all

.PHONY : all clean fclean re

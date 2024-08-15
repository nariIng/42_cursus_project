NAME = push_swap
SRCS = push_swap.c push_swap_utils.c push_swap_error.c circulaire_list.c \
		moovs.c checking.c exit_error.c find.c shorting_b.c coast.c \
		coast_reverse.c shorting_a.c moov_in.c moovs_ext.c moovs_ext_ext.c\
		find_ext.c shorting_a_ext.c
SRCS_GNL = ./gnl/get_next_line_bonus.c ./gnl/get_next_line_utils_bonus.c
OBJS = $(SRCS:.c=.o)
OBJS_GNL = $(SRCS_GNL:.c=.o)
AR = ar -rcs
CC = gcc -Wall -Wextra -Werror -g
RM = rm -f
PRINTF_DIR = ./libftprintf/libft.a

$(NAME): $(OBJS) $(PRINTF_DIR) $(OBJS_GNL)
		$(AR) libft.a $(OBJS) $(OBJS_GNL)
		$(CC) -o $(NAME) $(OBJS) $(PRINTF_DIR)

all : $(NAME)

$(PRINTF_DIR):
		make -C ./libftprintf/

clean:
		make clean -C ./libftprintf/
		$(RM) $(OBJS) $(OBJS_GNL)

fclean: clean
		$(RM) $(NAME)
		$(RM) libft.a
		make fclean -C ./libftprintf/

re: fclean all
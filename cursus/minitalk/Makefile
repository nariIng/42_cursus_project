CLIENT = client
SERVER = server
SRC_CLIENT = client.c
SRC_CLIENT_BONUS = client_bonus.c
SRC_SERVER = server.c
SRC_SERVER_BONUS = server_bonus.c
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ_CLIENT_BONUS = $(SRC_CLIENT_BONUS:.c=.o)
OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_SERVER_BONUS = $(SRC_SERVER_BONUS:.c=.o)
AR = ar -rcs
CC = gcc -Wall -Wextra -Werror -g
RM = rm -f
PRINTF_DIR = ./libftprintf

all : $(SERVER) $(CLIENT)

print : libftprintf
		make -C $(PRINTF_DIR)
		cp $(PRINTF_DIR)/libft.a ./
		cp libft.a libft_client.a
		cp libft.a libft_server.a
		$(RM) libft.a

$(CLIENT) : print $(OBJ_CLIENT)
			$(AR) libft_client.a $(OBJ_CLIENT)
			$(CC) -o $(CLIENT) libft_client.a
$(SERVER) : print $(OBJ_SERVER)
			$(AR) libft_server.a $(OBJ_SERVER)
			$(CC) -o $(SERVER) libft_server.a

bonus : print $(OBJ_CLIENT_BONUS) $(OBJ_SERVER_BONUS)
			$(AR) libft_client.a $(OBJ_CLIENT_BONUS)
			$(CC) -o $(CLIENT) libft_client.a
			$(AR) libft_server.a $(OBJ_SERVER_BONUS)
			$(CC) -o $(SERVER) libft_server.a

clean :
		make clean -C $(PRINTF_DIR)
		$(RM) $(OBJ_CLIENT) $(OBJ_SERVER) $(OBJ_CLIENT_BONUS) $(OBJ_SERVER_BONUS)

fclean : clean
		$(RM) $(SERVER) $(CLIENT)
		$(RM) libft_client.a libft_server.a
		make fclean -C $(PRINTF_DIR)

re : fclean all

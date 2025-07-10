CC = c++
FLAGS = -Wall -Werror -Wextra
SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp = .o)
NAME = Zombie
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean: $(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re


CC = c++
FLAGS = -Wall -Werror -Wextra
SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f
NAME = Zombie

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

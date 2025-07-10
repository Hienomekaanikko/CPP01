CC = c++
FLAGS = -Wall -Werror -Wextra
SRC = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f
NAME = weaponizer

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
		$(NAME)

re: fclean all

.PHONY: all clean fclean re

CC = c++
FLAGS = -Wall -Werror -Wextra
SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f
NAME = Harl

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


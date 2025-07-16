CC = c++
FLAGS = -Wall -Werror -Wextra
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f
NAME = replacer

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


SRC = $(wildcard ./src/*.cpp)
NAME = RPN
OBJ_DIR = obj
OBJ = $(patsubst ./src/%.cpp, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	c++ -Wall -Wextra -Werror -g -std=c++98 $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: ./src/%.cpp | $(OBJ_DIR)
	c++ -Wall -Wextra -Werror -g -std=c++98 -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
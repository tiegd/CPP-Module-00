NAME = PhoneBook

CC = c++

CFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98

INCLUDE = inc

BIN = bin/
			
SRC =	main.cpp	\

OBJ = $(SRC: .cpp=.o)
OBJ := $(addprefix $(BIN), $(SRC:.cpp=.o))
DEPS =   $(OBJ:.o=.d)

all: $(BIN) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(BIN)%.o: $(SRC)%.cpp
	@mkdir -p $(dir $@)

$(BIN):
	mkdir -p $(BIN)

clean:
	rm -rf $(BIN)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)
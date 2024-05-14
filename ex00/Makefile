Name = ScalarConverter

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ScalarConverter.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(SRC) $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(Name)

# This rule states that each object file depends on the corresponding .cpp and .hpp files.
%.o: %.cpp %.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -fr $(Name)
re : fclean all

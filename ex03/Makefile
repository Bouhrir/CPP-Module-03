NAME = DiamondTrap
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ = ${SRC:.cpp=.o}
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

.SILENT:
all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CXXFLAGS} ${OBJ} -o ${NAME}
	@echo "\033[1;7;32mSuccessfully compiled $(NAME)!\033[0m"

clean:
	rm -rf $(OBJ) obj/
	@echo "\033[1;9;7;31mCleaning up...!\033[0m"

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re


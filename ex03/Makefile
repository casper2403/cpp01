NAME_EXEC	= main
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -g -std=c++98
OFLAGS		= -Wall -Wextra -Werror -g -std=c++98
OBJ			= obj

# Source files
EXEC_SRCS	= src/HumanA.cpp src/HumanB.cpp src/Weapon.cpp src/main.cpp

EXEC_OBJS	= $(EXEC_SRCS:src/%.cpp=obj/%.o)

all:		$(NAME_EXEC)

$(NAME_EXEC):	$(EXEC_OBJS)
		$(CC) $(CFLAGS) $(EXEC_OBJS) -o $(NAME_EXEC)

obj/%.o: src/%.cpp | $(OBJ)
		@mkdir -p $(dir $@)
		$(CC) $(OFLAGS) -c $< -o $@

$(OBJ):
		mkdir -p $(OBJ)

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -f $(NAME_EXEC)

re:		fclean all

.PHONY:		all clean fclean re

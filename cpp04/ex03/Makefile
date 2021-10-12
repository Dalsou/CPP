# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/21 15:21:37 by afoulqui          #+#    #+#              #
#    Updated: 2021/10/01 18:06:50 by afoulqui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------- #
#     VARIABLES     #
# ----------------- #

NAME	=	a.out

SRCS	=	main.cpp \
			AMateria.cpp \
			Ice.cpp \
			Cure.cpp\
			Character.cpp \
			MateriaSource.cpp


OBJ_DIR	=	objs/
OBJS	=	$(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

# ----------------- #
#    COMPILATION    #
# ----------------- #

CC		=	clang++

FLAGS	=	-Wall -Wextra -Werror

# ----------------- #
#     FUNCTIONS     #
# ----------------- #

$(OBJ_DIR)%.o: %.cpp
				@mkdir -p $(OBJ_DIR)
				@$(CC) $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJS)
				@$(CC) $(FLAGS) $(OBJS) -o $(NAME)		
				@echo "\n\t\033[36;1m*.............................*"
				@echo "\n\t*    Compilation $(NAME)    *\t   \033[32;1m--------->>> \033[4;5mComplete\033[0m"
				@echo "\n\t\033[036;1m*.............................*\033[0m\n"

all:		$(NAME)

# ----------------- #
#       CLEAN       #
# ----------------- #

RM		=	rm -rf

clean:	
			@$(RM) $(OBJ_DIR)
			@echo "\033[36;1m $(NAME) ------>>  clean\033[0m\n"

fclean:		clean
			@$(RM) $(NAME)
			@echo "\033[36;1m $(NAME) ------>>  fclean\033[0m\n"

re:			fclean all

.PHONY:		all clean fclean re
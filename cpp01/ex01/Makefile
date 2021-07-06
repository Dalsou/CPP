# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/01 18:05:29 by afoulqui          #+#    #+#              #
#    Updated: 2021/07/01 18:05:57 by afoulqui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------- #
#     VARIABLES     #
# ----------------- #

NAME	=	a.out

SRCS	=	main.cpp \
			Zombie.cpp \
			ZombieHorde.cpp

INC		=	Zombie.hpp

OBJS	=	$(SRCS:.cpp=.o)

# ----------------- #
#    COMPILATION    #
# ----------------- #

CC		=	clang++

FLAGS	=	-Wall -Wextra -Werror -std=c++98 -I$(INC)

# ----------------- #
#     FUNCTIONS     #
# ----------------- #

all:		$(NAME)

$(NAME):	$(OBJS)
				@$(CC) $(FLAGS) $(OBJS) -o $(NAME)		
				@echo "\n\t\033[36;1m*.............................*"
				@echo "\n\t*    Compilation $(NAME)    *\t   \033[32;1m--------->>> \033[4;5mComplete\033[0m"
				@echo "\n\t\033[036;1m*.............................*\033[0m\n"

# ----------------- #
#       CLEAN       #
# ----------------- #

RM		=	rm -rf

clean:	
			@$(RM) $(OBJS)
			@echo "\033[36;1m $(NAME) ------>>  clean\033[0m\n"

fclean:		clean
			@$(RM) $(NAME)
			@echo "\033[36;1m $(NAME) ------>>  fclean\033[0m\n"

re:			fclean all

.PHONY:		all clean fclean re
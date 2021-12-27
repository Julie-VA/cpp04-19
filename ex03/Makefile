# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 13:23:11 by rvan-aud          #+#    #+#              #
#    Updated: 2021/12/23 16:04:01 by rvan-aud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp				\
				srcs/AMateria.cpp		\
				srcs/Character.cpp		\
				srcs/Cure.cpp			\
				srcs/Ice.cpp			\
				srcs/MateriaSource.cpp	\

NAME		= ex03

CXX			= clang++

RM			= rm -f

CXXFLAGS	= -I includes -Wall -Wextra -Werror -std=c++98 -g

OBJS		= $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

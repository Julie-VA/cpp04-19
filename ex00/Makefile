# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 13:23:11 by rvan-aud          #+#    #+#              #
#    Updated: 2021/12/20 15:43:52 by rvan-aud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp				\
				srcs/Animal.cpp			\
				srcs/Cat.cpp			\
				srcs/Dog.cpp			\
				srcs/WrongAnimal.cpp	\
				srcs/WrongCat.cpp		\

NAME		= ex00

CXX			= clang++

RM			= rm -f

CXXFLAGS	= -I includes -Wall -Wextra -Werror -std=c++98

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

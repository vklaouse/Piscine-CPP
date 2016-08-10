#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/08 16:51:21 by vklaouse          #+#    #+#              #
#    Updated: 2016/08/09 15:18:32 by vklaouse         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = contact

SRC = Phone.class.cpp phone.cpp

OBJS = $(SRC:%.cpp=%.o)

FLAGS = -Wextra -Werror -Wall

$(NAME):
	@g++ $(FLAGS) -c $(SRC)
	@g++ -o $(NAME) $(FLAGS) $(OBJS)

all : $(NAME)

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

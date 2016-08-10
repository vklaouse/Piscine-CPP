#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/08 15:40:34 by vklaouse          #+#    #+#              #
#    Updated: 2016/08/08 17:18:25 by vklaouse         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = megaphone

SRC = megaphone.cpp

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

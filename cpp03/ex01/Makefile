# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/21 16:24:56 by mmaila            #+#    #+#              #
#    Updated: 2024/07/23 09:58:53 by mmaila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++

FLAGS= -Wall -Werror -Wextra

SRCS= main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS= $(SRCS:.cpp=.o)

NAME= ScavTrap

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp ./ClapTrap.hpp ./ScavTrap.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
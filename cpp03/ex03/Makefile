# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/21 16:24:56 by mmaila            #+#    #+#              #
#    Updated: 2024/07/23 10:10:08 by mmaila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++

FLAGS= -Wall -Werror -Wextra

SRCS= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS= $(SRCS:.cpp=.o)

NAME= DiamondTrap

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp ./ClapTrap.hpp ./ScavTrap.hpp ./FragTrap.hpp ./DiamondTrap.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
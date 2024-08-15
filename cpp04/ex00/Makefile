# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/21 16:24:56 by mmaila            #+#    #+#              #
#    Updated: 2024/07/24 09:50:04 by mmaila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++

FLAGS= -Wall -Werror -Wextra

SRCS= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJS= $(SRCS:.cpp=.o)

NAME= Animal

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp ./Animal.hpp ./Dog.hpp ./Cat.hpp ./WrongAnimal.hpp ./WrongCat.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
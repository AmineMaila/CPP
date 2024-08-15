# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/21 16:24:56 by mmaila            #+#    #+#              #
#    Updated: 2024/07/24 18:42:21 by mmaila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++

FLAGS= -Wall -Werror -Wextra

SRCS= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJS= $(SRCS:.cpp=.o)

NAME= Materia

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp ./AMateria.hpp ./MateriaSource.hpp ./Ice.hpp ./Cure.hpp ./Character.hpp ./IMateriaSource.hpp ./ICharacter.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
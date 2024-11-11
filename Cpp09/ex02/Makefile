CPP= c++

FLAGS= -Wall -Werror -Wextra

SRCS= main.cpp PmergeMe.cpp

OBJS= $(SRCS:.cpp=.o)

NAME= PmergeMe

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp ./PmergeMe.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
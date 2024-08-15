CPP= c++

FLAGS= -Wall -Werror -Wextra

SRCS= main.cpp putType.cpp ScalarConverter.cpp

OBJS= $(SRCS:.cpp=.o)

NAME= convert

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp ./ScalarConverter.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
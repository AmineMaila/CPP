CPP= c++

FLAGS= -Wall -Werror -Wextra

SRCS= main.cpp Bureaucrat.cpp Form.cpp

OBJS= $(SRCS:.cpp=.o)

NAME= Sign

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp ./Bureaucrat.hpp ./Form.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
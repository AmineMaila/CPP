CPP= c++

FLAGS= -Wall -Werror -Wextra

SRCS= main.cpp Serializer.cpp

OBJS= $(SRCS:.cpp=.o)

NAME= serialize

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp ./Serializer.hpp ./Data.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
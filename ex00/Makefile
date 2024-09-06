CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = BraiiiiiiinnnzzzZ

SRCS = ./main.cpp \
		./newZombie.cpp \
		./randomChump.cpp \
		./Zombie.cpp \

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${CPPFLAGS} -o ${NAME} ${OBJS} -I ./

.c.o :
	${CC} ${CPPFLAGS} -c -o ${SRCS} ${OBJS}

clean :
	rm -rf ${OBJS}

fclean :
	make clean
	rm -rf ${NAME}

re :
	make fclean
	make all

.PHONY: all clean fclean re

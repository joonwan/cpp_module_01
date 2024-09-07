CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = HI_THIS_IS_BRAIN

SRCS = ./main.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${CPPFLAGS} -o ${NAME} ${OBJS}

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
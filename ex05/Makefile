CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./main.cpp \
		./Harl.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = Harl2.0

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${CPPFLAGS} -o ${NAME} ${OBJS}

.c.o:
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

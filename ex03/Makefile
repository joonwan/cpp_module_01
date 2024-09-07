CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ./main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \

OBJS = ${SRCS:.cpp=.o}

NAME = UnnecessaryViolence

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

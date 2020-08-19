SRCF			= ${shell find srcs -type f -name "*.c"}

INCF			= includes

OBJF			= ${SRCF:.c=.o}

NAME			= write

CC			= gcc

FLAGS			= -Wall -Wextra -Werror -I${INCF}

.c.o:			
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

RM			= rm -f

${NAME}:		${OBJF}
			${CC} -o ${NAME} ${OBJF}

all:			${NAME}

clean:			${RM} ${OBJF}

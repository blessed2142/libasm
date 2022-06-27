NAME	= libasm.a

SRCS	= ft_read.s ft_strcmp.s ft_strcpy.s \
		  ft_strdup.s ft_strlen.s ft_write.s \

OBJS	= ${SRCS:.s=.o}

INC		= libasm.h

RM		= rm -rf

.s.o:
		nasm -f macho64 -I ${INC} -s $< -o ${<:.s=.o}

${NAME}:	${OBJS} ${INC}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}
all:		${NAME}

run:
	gcc -Wall -Wextra -Werror libasm.a main.c && ./a.out

clean:		
			${RM} ${OBJS}
fclean:		clean
			${RM} ${NAME}
re:			fclean all

.PHONY:		all clean fclean re

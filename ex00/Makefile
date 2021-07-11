# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgomez-a <jgomez-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/10 17:12:14 by jgomez-a          #+#    #+#              #
#    Updated: 2021/07/11 19:46:25 by jgomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./assets/ft_str.c
OBJS	= ${SRCS:.c=.o}
INCS	= headers
NAME	= rush-02
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all :
	${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

norm :
	norminette */*.[ch]

re : fclean all

test : re
	@echo "[TEST] Number: 42";
	@./${NAME} 42 | cat -e;
	@echo "[TEST] Number: 0";
	@./${NAME} 0 | cat -e;
	@echo "[TEST] Number: 10.4";
	@./${NAME} 10.4 | cat -e;
	@echo "[TEST] Number: 100000";
	@./${NAME} 100000 | cat -e;
	@echo "[TEST] Number: 20, language: FRENCH";
	@./${NAME} numbers_french.dict 20 | cat -e;
	@echo "[TEST] Number: 20, language: WITH_CUSTOM";
	@./${NAME} numbers_with_custom.dict 20 | cat -e;

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 17:09:33 by mspasic           #+#    #+#              #
#    Updated: 2024/11/13 16:25:38 by mspasic          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= streaming 

CXXFLAGS= -Wall -Werror -Wextra -fsanitize=address -g

CXX = c++

SOURCE_FILES	= main.cpp \
					Streaming.cpp

OBJECT_FILES	= ${SOURCE_FILES:.cpp=.o}

RM = rm -f

COLOUR_END=\033[0m
RED=\033[1;31m
GREEN=\033[1;32m
YELLOW=\033[1;33m
BLUE=\033[1;34m
CYAN=\033[1;36m

all:		${NAME}

${NAME}:${OBJECT_FILES}
			@echo "${YELLOW}Compiling ${NAME} ${COLOUR_END}..."
			${CXX} ${CXXFLAGS} ${OBJECT_FILES} -o ${NAME}
			@echo "${GREEN}${NAME} created ✔️"

clean:
			@ echo "${YELLOW}Deleting ${NAME} object files${COLOUR_END}..."
			@ ${RM} ${OBJECT_FILES}
			@ echo "${RED}${NAME}object files deleted ✔️ ${COLOUR_END}"

fclean:		clean
			@ echo "${YELLOW}Deleting ${NAME}..."
			@ ${RM} ${NAME}
			@ echo "${RED}${NAME} deleted ${COLOUR_END} ✔️"

re:			fclean all

.PHONY:		all clean fclean re


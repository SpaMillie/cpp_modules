# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 17:02:16 by mspasic           #+#    #+#              #
#    Updated: 2025/04/19 11:33:20 by mspasic          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= convert 

CXXFLAGS= -Wall -Werror -Wextra -std=c++17 -fsanitize=address -g

CXX = c++

SOURCE_FILES	= main.cpp

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
			${CXX} ${CXXFLAGS} ${OBJECT_FILES} -I include/ -o ${NAME}
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
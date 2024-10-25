NAME	=	phonebook

CXXFLAGS= -Wall -Werror -Wextra

CXX = c++

SOURCE_FILES	= PhoneBook.cpp \
					Contact.cpp

OBJECT_FILES	= ${SOURCE_FILES:.cpp=.o}

# HEADER_FILES	= include/

RM = rm -f

COLOUR_END=\033[0m
RED=\033[1;31m
GREEN=\033[1;32m
YELLOW=\033[1;33m
BLUE=\033[1;34m
CYAN=\033[1;36m

${NAME}:${OBJECT_FILES}
			@echo "${YELLOW}Compiling ${NAME} ${COLOUR_END}..."
			${CXX} ${CXXFLAGS} ${OBJECT_FILES} -o ${NAME} -I include/
			@echo "${GREEN}${NAME} created ✔️"

all:		${NAME}

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


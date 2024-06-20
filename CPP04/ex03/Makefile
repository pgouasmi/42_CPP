# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 14:37:09 by pgouasmi          #+#    #+#              #
#    Updated: 2024/01/18 18:27:22 by pgouasmi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#COLOR
_GREEN = \033[92m
_YELLOW = \033[33m
_RED = \033[31m

#POLICE
_END = \033[0m
_BOLD = \033[1m

NAME = Materias
CFLAGS = -Wall -Wextra -std=c++98 -ggdb3
RM = @rm -rf
CC = @c++
DIR = @mkdir -p
PRINT = @echo
HEADERS =	AMateria.hpp \
			ICharacter.hpp \
			Cure.hpp \
			Ice.hpp \
			Character.hpp \
			IMateriaSource.hpp \
			MateriaSource.hpp

FILES =		main \
			AMateria \
			Cure \
			Ice \
			ICharacter \
			Character \
			IMateriaSource \
			MateriaSource


OBJS = $(addsuffix .o, $(addprefix Objects/, $(FILES)))

$(NAME): $(OBJS)
	$(PRINT) "\n${_YELLOW}Making $(NAME)...${_END}"
	$(CC) $(OBJS) -o $(NAME)
	$(PRINT) "${_BOLD}${_GREEN}$(NAME) done.\a${_END}"

Objects/%.o: %.cpp Makefile $(HEADERS)
	$(DIR) Objects
	$(PRINT) "Compiling ${_BOLD}$<$(_END)..."
	$(CC) -c $(CFLAGS) $< -o $@

all: $(NAME)

clean:
	$(PRINT) "\n${_BOLD}Cleaning Objects...${_END}"
	$(RM) .OS
	$(RM) $(OBJS)
	$(PRINT) "${_BOLD}${_GREEN}Objects cleaned.\a${_END}"

fclean:
	$(PRINT) "\n${_RED}Cleaning Objects...${_END}"
	$(RM) $(OBJS)
	$(PRINT) "${_RED}Deleting Objects directory...${_END}"
	$(RM) Objects
	$(PRINT) "${_RED}Deleting $(NAME)...${_END}"
	$(RM) $(NAME)
	$(PRINT) "${_GREEN}Objects cleaned.${_END}"
	$(PRINT) "${_GREEN}Objects directory deleted.${_END}"
	$(PRINT) "${_GREEN}$(NAME) deleted.\a\n${_END}"

re: fclean all

.PHONY: all clean fclean re

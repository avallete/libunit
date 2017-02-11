# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avallete <avallete@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/17 11:43:55 by avallete          #+#    #+#              #
#*   Updated: 2016/06/15 15:33:29 by avallete         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

UNIT_SRC_PATH=  ./framework/srcs
UNIT_SRC_NAME:=$(shell find $(UNIT_SRC_PATH) -type f -name "*.c")

UNIT_INC_PATH=  ./framework/includes/
UNIT_INC_NAME=  libunit.h\
                ft_signal.h

OBJ_PATH =./obj
OBJ_NAME:=$(UNIT_SRC_NAME:.c=.o)

SRC:=$(UNIT_SRC_NAME)
OBJ:=$(OBJ_NAME)

INCF:=$(addprefix $(UNIT_INC_PATH), $(UNIT_INC_NAME))
INC:=$(addprefix -I, $(UNIT_INC_PATH))

CFLAGS=-Wall -Wextra -Werror
CC=gcc

NAME=libunit.a

RED=\033[0;31m
LBLUE=\033[34m
GREEN=\033[32m
CYAN=\033[0;36m
ORANGE=\033[0;33m
NC=\033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):$(OBJ)
	@echo "${GREEN}Compile $(NAME) with $(CFLAGS)${NC}";
	@echo "${LBLUE}ar rc $(NAME)${NC}"
	@ar rc $(NAME) $(OBJ)
	@echo "${ORANGE}ranlib $(NAME)${NC}"
	@ranlib $(NAME)

$(OBJ): $(SRC) $(INCF)
	@echo "${ORANGE}Create bynary for $(NAME) : $@ with $<${NC}";
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	@echo "${RED}Delete OBJ files${NC}"
	@rm -rf $(OBJ)

fclean: clean
	@echo "${RED}Delete $(NAME) file${NC}"
	@rm -rf $(NAME)

re: fclean all clean

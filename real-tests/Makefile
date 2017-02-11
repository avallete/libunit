# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avallete <avallete@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/18 13:18:20 by avallete          #+#    #+#              #
#*   Updated: 2016/08/06 03:56:22 by avallete         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

CFLAGS=-Wall -Wextra -Werror

SRC_PATHS:=$(shell find . -depth 1 -type d)
SRC_NAME:=$(shell find . -mindepth 2 -type f -name "[0-9][0-9]*.c")
INC_NAME=$(shell find . -mindepth 2 -type f -name "*.h")
OBJ_NAME=$(SRC_NAME:.c=.o)

SRC=$(SRC_NAME)
OBJ=$(OBJ_NAME)
INCF=	./libft/includes\
		../framework/includes
INC=$(addprefix -I, $(INCF))


LIBFT:=-L libft/ -lft

LIBUNIT:=-L ../ -lunit

CC=cc
NAME=tests.exe
RED=\033[30;41m
GREEN=\033[32m
CYAN=\033[36m
ORANGE=\033[33m
NC=\033[0m

.PHONY: all clean fclean re noflags test

all: $(NAME)

$(NAME):$(OBJ) ./main.c
	@make -s -C ../
	@make -s -C libft
	@echo "${GREEN}Compile $(NAME) with $(CFLAGS)${NC}";
	$(CC) $(CLFAGS) $(OBJ) $(INC) ./main.c $(LIBUNIT) $(LIBFT) -o $(NAME)

%.o:%.c $(INC_NAME)
	echo $(OBJ)
	@echo "${ORANGE}Create bynary $(NAME) : $@ with $<${NC}";
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	@echo "${RED} Delete OBJ files ${NC}"
	@rm -rf $(OBJ)

fclean: clean
	@echo "${RED} Delete $(NAME) file ${NC}"
	@rm -rf $(NAME)

re: fclean all clean

noflags: CFLAGS=""
noflags: all

test: all
	./$(NAME)

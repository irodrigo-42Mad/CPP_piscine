# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/23 11:31:25 by irodrigo          #+#    #+#              #
#    Updated: 2022/09/14 11:20:31 by irodrigo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# OS DISCLAIMER #
.DELETE_ON_ERROR:

#UNAME_S := $(shell uname -s)

#ifeq ($(UNAME_S), Linux)
#	LIBS := -lm -lbsd -lX11 -lXext
#	MLX = mlx_linux/libmlx.a
#	MINILIBX = mlx_linux
#endif
#ifeq ($(UNAME_S), Darwin)
#	LIBS := -lz -framework OpenGL -framework AppKit
#	MINILIBX = mlx_ios
#	MLX = mlx_ios/libmlx.dylib
#endif

# INCLUDE PATHS #
# INCLUDES = -I/usr/include -I. -Iincludes/ 

# FILE NAME #
NAME 		= phonebook

# SOURCES #
SOURCES		= phonebook.cpp main.cpp contacts.cpp

OBJS = $(SOURCES:.cpp=.o)

# COMPILER AND FLAGS#
CXX = clang++
VERSION = --std=c++98 -pedantic 
CXXFLAGS = -Wall -Wextra -Werror -O3 $(VERSION) #-g -g3 -fsanitize=address

ifdef DEBUG
	CXXFLAGS += -g3 -fsanitize=address
else
	CXXFLAGS += -O3
endif

# COLOUR DEFINITION #
BLUE = \033[0;34m
GREEN = \033[1;32m
RESET = \033[0m

# CLEANING INSTRUCTION #
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(BLUE)==========CREATING $(NAME)==========$(RESET)"
	@$(CXX) $(CXXFLAGS) ${OBJS} -o $(NAME)
	@echo "Done"
	@echo "$(GREEN)==========WELLDONE==========$(RESET)"
	@echo "Success creating $(NAME) app file"

test:

clean:
	@$(RM) $(OBJS)
	@echo "$(GREEN)==========REMOVED==========$(RESET)"
	@echo "Success normal cleaning"

fclean: clean
	@$(RM) ${NAME}
	@echo "$(GREEN)==========TOTALLY REMOVED==========$(RESET)"
	@echo "Success deepest cleaning"

re : fclean all

.PHONY: all clean fclean re test

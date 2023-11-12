# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/23 11:31:25 by irodrigo          #+#    #+#              #
#    Updated: 2022/07/11 12:57:05 by irodrigo         ###   ########.fr        #
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

INCLUDES = -I/usr/include -I. -Iincludes/ 

# FILE NAME #
NAME 		= megaphone
#DIR			= ./src/

# SOURCES #
SOURCES		=	megaphone.cpp

#SRC 		= 	$(addprefix $(DIR), $(SOURCES))
#SRCBONUS 	=	$(addprefix $(DIR), $(SOURCESBON))
#SRCCUB 		=	$(addsuffix .c, $(SRC))
#SRCCUBBONUS =	$(addsuffix .c, $(SRCBONUS))

OBJS = $(SOURCES:.cpp=.o)
#OBJSBONUS = $(SRCCUBBONUS:.c=.o)

#LIBFT = libft/libft.a

# COMPILER #

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -O3 -pedantic #-g -g3 -fsanitize=address

# COLOUR DEFINITION #
BLUE = \033[0;34m
GREEN = \033[1;32m
RESET = \033[0m

# CLEANING INSTRUCTION #
RM = rm -rf

all: $(NAME)

#${LIBS}
$(NAME): $(OBJS)
	@echo "$(BLUE)==========CREATING MEGAPHONE==========$(RESET)"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) ${OBJS} -o ${NAME}    
	@echo "Done"
	@echo "$(GREEN)==========WELLDONE==========$(RESET)"
	@echo "Success creating megaphone app file"

clean:
	@$(RM) $(OBJS)
	@echo "$(GREEN)==========REMOVED==========$(RESET)"
	@echo "Success normal cleaning"

fclean: clean
	@$(RM) ${NAME}
	@echo "$(GREEN)==========TOTALLY REMOVED==========$(RESET)"
	@echo "Success deepest cleaning"

re : fclean all

.PHONY: all clean fclean re

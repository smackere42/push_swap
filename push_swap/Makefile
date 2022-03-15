# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 15:23:43 by smackere          #+#    #+#              #
#    Updated: 2022/03/15 18:34:51 by smackere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
BONUS_NAME = checker

HEADER = push_swap.h

SORT_PATH = ./sort/
SORT =	ft_big_sort.c \
		ft_small_sort.c \
		ft_sort_arr.c \
		ft_sort_check.c \
		ft_sort.c \

UTILS_PATH = ./utils/
UTILS = ft_atoi.c \
		ft_check_index.c \
		ft_create_stack.c\
		ft_error.c \
		ft_lstclear.c \
		ft_lstlast.c \
		ft_lstnew.c \
		ft_pushback.c \
		validation.c \

COMM_PATH = ./commands/
COMM =	ft_rr_rrr.c\
		ft_sa_pb.c \

SRCS = push_swap.c $(addprefix $(UTILS_PATH), $(UTILS)) $(addprefix $(COMM_PATH), $(COMM)) $(addprefix $(SORT_PATH), $(SORT))
SRCS_BONUS = checker.c $(addprefix $(UTILS_PATH), $(UTILS)) $(addprefix $(COMM_PATH), $(COMM)) $(addprefix $(SORT_PATH), $(SORT)) $(addprefix $(GNL_PATH), $(GNL))

OBJ = $(patsubst %.c, %.o, $(SRCS))
OBJ_BONUS = $(patsubst %.c, %.o, $(SRCS_BONUS))

CC = gcc
FLAGS = -Wall -Werror -Wextra

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -I $(HEADER) -o $@

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(OBJ_BONUS)
	$(CC) $(OBJ_BONUS) -I $(HEADER) -o $@

clean:  
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME) $(BONUS_NAME)

re: fclean all
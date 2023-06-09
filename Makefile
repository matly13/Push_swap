NAME = push_swap

SRC = main.c

SRCS = error.c

OBJS = $(SRCS:.c=.o)
OBJ = $(SRC:.c=.o)

RM = rm -f

FTPRINTF = libs/ft_printf/
LIBFT := libs/libft/
LIBRARY := libs/libft/libft.a libs/ft_printf/libftprintf.a

CC = gcc -Wall -Wextra -Werror -g

.c.o = ${CC} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS} $(OBJ)
	@printf "$(CURSIVE)$(YELLOW) 	- Compiling libft ... $(RESET)\n"
	@make -s -C $(LIBFT)
	@printf "\e[0m\e[92m - libft compiled.$(RESET)\n"
	@printf "$(CURSIVE)$(YELLOW) 	- Compiling libft ... $(RESET)\n"
	@make -s -C $(FTPRINTF)
	@printf "\e[0m\e[92m - libft compiled.$(RESET)\n"
	@printf "$(CURSIVE)$(YELLOW) 	- Compiling push_swap ... $(RESET)\n"
	@$(CC) $(OBJS) $(OBJ) $(LIBRARY) -o $(NAME)
	@printf "\e[0m\e[92m - push_swap compiled.$(RESET)\n"

all: $(NAME)

clean:
	@make -s clean -C $(LIBFT)
	@printf "\e[0m\e[92m$(RED) - OBJS libft removed.$(RESET)\n"
	@make -s clean -C $(FTPRINTF)
	@printf "\e[0m\e[92m$(RED) - OBJS ft_printf removed.$(RESET)\n"
	@${RM} $(OBJS)
	@${RM} $(OBJ)
	@printf "\e[0m\e[92m$(RED) - OBJS push_swap removed.$(RESET)\n"

fclean: clean
	@make -s fclean -C $(LIBFT)
	@printf "\e[0m\e[92m$(RED) - library libft removed.$(RESET)\n"
	@make -s fclean -C $(FTPRINTF)
	@printf "\e[0m\e[92m$(RED) - library ft_printf removed.$(RESET)\n"
	@${RM} $(NAME) ${OBJ}
	@${RM} $(NAME) ${OBJS}
	@printf "\e[0m\e[92m$(RED) - push_swap removed.$(RESET)\n"

re: fclean all



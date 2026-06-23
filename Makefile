# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/15 20:06:21 by kjurkows          #+#    #+#              #
#    Updated: 2026/06/23 17:02:41 by kjurkows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	cc
CXX			=	c++
CFLAGS		=	-Wall -Wextra -Werror -I .
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++17 -I .
AR			=	ar
ARFLAGS		=	rcs

NAME		=	libft.a

SRCS		=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

OBJS_DIR	=	objs
OBJS		=	$(SRCS:%.c=$(OBJS_DIR)/%.o)

RM			=	rm -rf

RED			=	\033[;31m
GREEN		=	\033[;32m
YELLOW		=	\033[;33m
BLUE		=	\033[;34m
MAGENTA		=	\033[;35m
CYAN		=	\033[;36m
RESET		=	\033[0m
POSITION	=	\033[2K\r

all: $(NAME)
	@echo "$(GREEN)$(NAME) is ready to use.$(RESET)"

$(NAME): $(OBJS)
	@echo "$(BLUE)Creating $(NAME)...$(RESET)"
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "$(GREEN)$(NAME) has been created successfully!$(RESET)"

%:	$(OBJS_DIR)/%.o

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	@echo -n "$(YELLOW)Compiling $<...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(POSITION)$(GREEN)Compiled $< successfully!$(RESET)"

clean:
	@$(RM) $(OBJS_DIR)
	@echo "$(RED)Cleaned object files.$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Fully cleaned all generated files.$(RESET)"

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)
	@echo "$(CYAN)Created objects directory.$(RESET)"

re: fclean all
	@echo "$(GREEN)Rebuild complete!$(RESET)"

.PHONY: all clean fclean re test

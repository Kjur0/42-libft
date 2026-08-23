# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/15 20:06:21 by kjurkows          #+#    #+#              #
#    Updated: 2026/08/23 04:29:24 by kjurkows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	cc
INCLUDES	=	-I include
CFLAGS		=	-Wall -Wextra -Werror $(INCLUDES)
AR			=	ar
ARFLAGS		=	rcs

NAME		=	libft.a

SRCS_DIR	=	src
SRCS		=	ft_char/ft_isalnum.c \
				ft_char/ft_isalpha.c \
				ft_char/ft_islower.c \
				ft_char/ft_isupper.c \
				ft_char/ft_isdigit.c \
				ft_char/ft_isxdigit.c \
				ft_char/ft_iscntrl.c \
				ft_char/ft_isgraph.c \
				ft_char/ft_isspace.c \
				ft_char/ft_isblank.c \
				ft_char/ft_isprint.c \
				ft_char/ft_ispunct.c \
				ft_char/ft_isascii.c \
				ft_char/ft_tolower.c \
				ft_char/ft_toupper.c \
				ft_str/ft_strlcpy.c \
				ft_str/ft_strlcat.c \
				ft_str/ft_strdup.c \
				ft_str/ft_substr.c \
				ft_str/ft_strjoin.c \
				ft_str/ft_strtrim.c \
				ft_str/ft_split.c \
				ft_str/ft_strmapi.c \
				ft_str/ft_striteri.c \
				ft_str/ft_strlen.c \
				ft_str/ft_strncmp.c \
				ft_str/ft_strchr.c \
				ft_str/ft_strrchr.c \
				ft_str/ft_strnstr.c \
				ft_str/ft_atoi.c \
				ft_str/ft_itoa.c \
				ft_mem/ft_calloc.c \
				ft_mem/ft_memchr.c \
				ft_mem/ft_memrchr.c \
				ft_mem/ft_memcmp.c \
				ft_mem/ft_memset.c \
				ft_mem/ft_bzero.c \
				ft_mem/ft_memcpy.c \
				ft_mem/ft_memmove.c \
				ft_io/ft_putchar_fd.c \
				ft_io/ft_putstr_fd.c \
				ft_io/ft_putendl_fd.c \
				ft_io/ft_putnbr_fd.c \
				ft_lst/ft_lstnew.c \
				ft_lst/ft_lstadd_front.c \
				ft_lst/ft_lstadd_back.c \
				ft_lst/ft_lstsize.c \
				ft_lst/ft_lstlast.c \
				ft_lst/ft_lstdelone.c \
				ft_lst/ft_lstclear.c \
				ft_lst/ft_lstiter.c \
				ft_lst/ft_lstmap.c

OBJS_DIR	=	build
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
	@echo -n "$(BLUE)Creating $(NAME)...$(RESET)"
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "$(POSITION)$(GREEN)$(NAME) has been created successfully!$(RESET)"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	@echo -n "$(YELLOW)Compiling $(basename $(notdir $<))...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(POSITION)$(GREEN)Compiled $(basename $(notdir $<)) successfully!$(RESET)"

clean:
	@$(RM) $(OBJS_DIR)
	@echo "$(RED)Cleaned object files.$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Fully cleaned all generated files.$(RESET)"

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)
	@mkdir -p $(OBJS_DIR)/ft_char
	@mkdir -p $(OBJS_DIR)/ft_str
	@mkdir -p $(OBJS_DIR)/ft_mem
	@mkdir -p $(OBJS_DIR)/ft_io
	@mkdir -p $(OBJS_DIR)/ft_lst
	@mkdir -p $(OBJS_DIR)/ft_printf
	@echo "$(CYAN)Created objects directory.$(RESET)"

re: fclean all
	@echo "$(GREEN)Rebuild complete!$(RESET)"

.PHONY: all clean fclean re

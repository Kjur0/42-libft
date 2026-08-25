# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/15 20:06:21 by kjurkows          #+#    #+#              #
#    Updated: 2026/08/25 03:16:44 by kjurkows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	cc
CFLAGS			:=	-Wall -Wextra -Werror -I./include
DEBUGFLAGS		:=	-Wall -Wextra -Werror -I./include -g

CXX				=	c++
CXXFLAGS		:=	-Wall -Wextra -Werror -I./include -I./tests -std=c++17 -g
TESTFLAGS		:=	-lgtest_main -lgtest -lpthread

AR				=	ar
ARFLAGS			=	rcs

NAME			=	libft.a
DEBUG_NAME		=	libft_debug.a
TEST_BIN		=	libft-test

SRCS_DIR		=	src
SRCS			=	ft_char/ft_isalnum.c \
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
					ft_str/ft_atol.c \
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
					ft_printf/ft_printf.c \
					ft_printf/ft_printf_utils.c \
					ft_printf/ft_printf_flags.c \
					ft_printf/ft_printf_c.c \
					ft_printf/ft_printf_s.c \
					ft_printf/ft_printf_p.c \
					ft_printf/ft_printf_di.c \
					ft_printf/ft_printf_u.c \
					ft_printf/ft_printf_x.c \
					ft_printf/ft_eprintf.c \
					ft_lst/ft_lstnew.c \
					ft_lst/ft_lstadd_front.c \
					ft_lst/ft_lstadd_back.c \
					ft_lst/ft_lstsize.c \
					ft_lst/ft_lstlast.c \
					ft_lst/ft_lstdelone.c \
					ft_lst/ft_lstclear.c \
					ft_lst/ft_lstiter.c \
					ft_lst/ft_lstmap.c \
					ft_math/ft_abs.c \
					ft_math/ft_max.c \
					ft_math/ft_min.c \
					ft_math/ft_clamp.c \
					ft_math/ft_pow.c \
					ft_math/ft_sqrt.c \
					ft_math/ft_fabs.c \
					ft_math/ft_fmax.c \
					ft_math/ft_fmin.c \
					ft_math/ft_fclamp.c \
					ft_math/ft_fpow.c \
					ft_math/ft_ceil.c \
					ft_math/ft_floor.c \
					ft_math/ft_round.c

TEST_SRCS_DIR	=	tests
TEST_SRCS		=	ft_char/ft_isalnum_tests.cpp \
					ft_char/ft_isalpha_tests.cpp \
					ft_char/ft_isascii_tests.cpp \
					ft_char/ft_isblank_tests.cpp \
					ft_char/ft_iscntrl_tests.cpp \
					ft_char/ft_isdigit_tests.cpp \
					ft_char/ft_isgraph_tests.cpp \
					ft_char/ft_islower_tests.cpp \
					ft_char/ft_isprint_tests.cpp \
					ft_char/ft_ispunct_tests.cpp \
					ft_char/ft_isspace_tests.cpp \
					ft_char/ft_isupper_tests.cpp \
					ft_char/ft_isxdigit_tests.cpp \
					ft_char/ft_tolower_tests.cpp \
					ft_char/ft_toupper_tests.cpp

OBJS_DIR		=	build
OBJS			=	$(SRCS:%.c=$(OBJS_DIR)/%.o)

DEBUG_OBJS_DIR	=	build/debug
DEBUG_OBJS		=	$(SRCS:%.c=$(DEBUG_OBJS_DIR)/%.o)

TEST_OBJS_DIR	=	build/test
TEST_OBJS		=	$(TEST_SRCS:%.cpp=$(TEST_OBJS_DIR)/%.o)

RM				=	rm -rf

RED				=	\033[;31m
GREEN			=	\033[;32m
YELLOW			=	\033[;33m
BLUE			=	\033[;34m
MAGENTA			=	\033[;35m
CYAN			=	\033[;36m
RESET			=	\033[0m
POSITION		=	\033[2K\r

all: $(NAME)
	@echo "$(GREEN)$(NAME) is ready to use.$(RESET)"

debug: $(DEBUG_NAME)
	@echo "$(GREEN)$(DEBUG_NAME) is ready to use.$(RESET)"

$(NAME): $(OBJS)
	@echo -n "$(BLUE)Creating $(NAME)... $(RESET)"
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "$(POSITION)$(GREEN)$(NAME) has been created successfully!$(RESET)"

$(DEBUG_NAME): $(DEBUG_OBJS)
	@echo -n "$(BLUE)Creating $(DEBUG_NAME)... $(RESET)"
	@$(AR) $(ARFLAGS) $(DEBUG_NAME) $(DEBUG_OBJS)
	@echo "$(POSITION)$(GREEN)$(DEBUG_NAME) has been created successfully!$(RESET)"

$(TEST_BIN): $(TEST_OBJS) $(DEBUG_NAME)
	@echo -n "$(BLUE)Linking $(TEST_BIN)... $(RESET)"
	@$(CXX) $(CFLAGS) $(TEST_OBJS) $(DEBUG_NAME) $(TESTFLAGS) -o $(TEST_BIN)
	@echo "$(POSITION)$(GREEN)Linked $(TEST_BIN) successfully!$(RESET)"

$(DEBUG_OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(DEBUG_OBJS_DIR)
	@echo -n "$(YELLOW)Compiling debug $(basename $(notdir $<))... $(RESET)"
	@$(CC) $(DEBUGFLAGS) -c $< -o $@
	@echo "$(POSITION)$(GREEN)Compiled debug $(basename $(notdir $<)) successfully!$(RESET)"

$(TEST_OBJS_DIR)/%.o: $(TEST_SRCS_DIR)/%.cpp | $(TEST_OBJS_DIR)
	@echo -n "$(YELLOW)Compiling $(basename $(notdir $<))... $(RESET)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "$(POSITION)$(GREEN)Compiled test $(basename $(notdir $<)) successfully!$(RESET)"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	@echo -n "$(YELLOW)Compiling $(basename $(notdir $<))... $(RESET)"
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
	@mkdir -p $(OBJS_DIR)/ft_math
	@echo "$(CYAN)Created objects directory.$(RESET)"

$(DEBUG_OBJS_DIR):
	@mkdir -p $(DEBUG_OBJS_DIR)
	@mkdir -p $(DEBUG_OBJS_DIR)/ft_char
	@mkdir -p $(DEBUG_OBJS_DIR)/ft_str
	@mkdir -p $(DEBUG_OBJS_DIR)/ft_mem
	@mkdir -p $(DEBUG_OBJS_DIR)/ft_io
	@mkdir -p $(DEBUG_OBJS_DIR)/ft_lst
	@mkdir -p $(DEBUG_OBJS_DIR)/ft_printf
	@mkdir -p $(DEBUG_OBJS_DIR)/ft_math
	@echo "$(CYAN)Created debug objects directory.$(RESET)"

$(TEST_OBJS_DIR):
	@mkdir -p $(TEST_OBJS_DIR)
	@mkdir -p $(TEST_OBJS_DIR)/ft_char
	@echo "$(CYAN)Created test objects directory.$(RESET)"	

re: fclean all
	@echo "$(GREEN)Rebuild complete!$(RESET)"

test: $(TEST_BIN)
	@echo "$(GREEN)Running tests...$(RESET)"
	@./$(TEST_BIN)

.PHONY: all clean fclean re test

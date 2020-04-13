# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/29 12:24:22 by bdekonin      #+#    #+#                  #
#    Updated: 2020/04/10 20:51:46 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NOCOLOR = \033[0m
GREEN = \033[92m

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c \
ft_putstr_fd.c ft_split.c ft_strchr.c \
ft_strdup.c	ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c \
ft_strtrim.c

OFILES = $(SRCS:.c=.o)

BONUS_SRC = $(SRCS) ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c \
ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstclear_bonus.c \
ft_lstmap_bonus.c ft_swap_bonus.c ft_strsearch_bonus.c \
ft_charsearch_bonus.c ft_counter_bonus.c

BONUS_OFILES = $(OFILES) $(BONUS_SRC:.c=.o)

INCLUDES = libft.h

all: $(NAME)

$(NAME): $(OFILES) $(INCLUDES)
	@ar rcs $(NAME) $?
	@echo "$(GREEN)[libft] - Created a Library and Object Files.$(NOCOLOR)"

bonus: $(NAME) $(BONUS_OFILES) $(BONUS_SRC)
	@touch bonus
	@ar rcs $(NAME) $?

%.o: %.c
	$(CC) -Wall -Wextra -Werror -c $<

clean:
	@/bin/rm -f $(BONUS_OFILES)
	@/bin/rm -f a.out
	@/bin/rm -f bonus
	@echo "$(GREEN)[libft] - Removed All Object Files.$(NOCOLOR)"

fclean:    clean
	@/bin/rm -f $(NAME)
	@echo "$(GREEN)[libft] - Removed .a file and all .o files.$(NOCOLOR)"

re: fclean all

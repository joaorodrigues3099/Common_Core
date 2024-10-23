SRCS 	= srcs/ft_bzero.c \
		  srcs/ft_isalnum.c \
		  srcs/ft_isalpha.c \
		  srcs/ft_isascii.c \
		  srcs/ft_isdigit.c \
		  srcs/ft_isprint.c \
		  srcs/ft_memcpy.c \
		  srcs/ft_memset.c \
		  srcs/ft_strlen.c \
		  srcs/ft_memmove.c \
		  srcs/ft_strlcpy.c \
		  srcs/ft_strlcat.c \
		  srcs/ft_toupper.c \
		  srcs/ft_tolower.c \
		  srcs/ft_strchr.c \
		  srcs/ft_strrchr.c \
		  srcs/ft_strncmp.c \
		  srcs/ft_memchr.c \
		  srcs/ft_memcmp.c \
		  srcs/ft_strnstr.c \
		  srcs/ft_atoi.c \
		  srcs/ft_calloc.c \
		  srcs/ft_strdup.c

OBJS 	= $(SRCS:.c=.o)
INCS	= includes
NAME	= libft.a
LIBC	= ar rc
LIBR	= ranlib
CC 		= cc
CFLAGS	= -Wall -Werror -Wextra -O3
RM		= rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS)

$(NAME): $(OBJS)
	$(LIBC) $@ $^
	$(LIBR) $@

all: $(NAME)

so:
	$(CC) -nostartfiles -fPIC ${CFLAGS} ${SRCS}
	$(CC) -nostartfiles -shared -o libft.so ${OBJS}

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) libft.so

re: fclean all

.PHONY: .c.o all so clean fclean re
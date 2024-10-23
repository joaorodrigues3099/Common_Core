cmake_minimum_required(VERSION 3.10)

project(Libft C)

set(CMAKE_C_STANDARD 99)

include_directories(includes)

add_executable(Libft
        srcs/ft_bzero.c
        srcs/ft_isalnum.c
        srcs/ft_isalpha.c
        srcs/ft_isascii.c
        srcs/ft_isdigit.c
        srcs/ft_isprint.c
        srcs/ft_memcpy.c
        srcs/ft_memset.c
        srcs/ft_strlen.c
        srcs/ft_memmove.c
        srcs/ft_strlcpy.c
        srcs/ft_strlcat.c
        srcs/ft_toupper.c
        srcs/ft_tolower.c
        srcs/ft_strchr.c
        srcs/ft_strrchr.c
        srcs/ft_strncmp.c
        srcs/ft_memchr.c
        srcs/libft.h
        srcs/ft_memcmp.c
        srcs/ft_strnstr.c
        srcs/ft_atoi.c
        srcs/ft_calloc.c
        srcs/ft_strdup.c)
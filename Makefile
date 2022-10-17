# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 14:09:53 by vgroux            #+#    #+#              #
#    Updated: 2022/10/17 15:46:55 by vgroux           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =         gcc
CFLAGS =     -Wall -Wextra -Werror
RM =         rm -f

SRCS =		ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_tolower.c ft_toupper.c ft_strnstr.c ft_bzero.c ft_strlcat.c ft_strlcpy.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_memset.c ft_calloc.c ft_strdup.c ft_strlen.c ft_memcpy.c ft_strchr.c ft_strrchr.c ft_strncmp.c
OBJS =		${SRCS:.c=.o}

BONUS =		ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstlast.c ft_lstsize.c ft_lstadd_front.c ft_lstnew.c
OBJSBONUS = ${BONUS:.c=.o}

NAME =     libft.a

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}
	ranlib ${NAME}

bonus: ${OBJSBONUS} ${OBJS}
	ar rcs ${NAME} ${OBJS} ${OBJSBONUS}
	ranlib ${NAME}

clean:
	${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re	

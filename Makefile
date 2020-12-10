# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/24 08:57:58 by pthomas           #+#    #+#              #
#    Updated: 2020/12/06 16:20:25 by pthomas          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

#========================================#
#=============== VARIABLES ==============#
#========================================#

#~~~~ Sources ~~~~#

SRCS		=	ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strlen.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_calloc.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c

BSRCS		=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

#~~~~ Objects ~~~~#

OBJS		= ${SRCS:.c=.o}
BOBJS		= ${BSRCS:.c=.o}

#~~~~ HEADERS ~~~~#

HEADERS		= libft.h

#~~~~ Output ~~~~#

NAME		= libft.a

#~~~~ Macros ~~~~#

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar
ARFLAGS		= rc
RM			= rm -f

#========================================#
#=============== TARGETS ================#
#========================================#

#~~~~ Main Rules ~~~~#

all:		${NAME}

$(NAME):	${OBJS}
			${AR} ${ARFLAGS} ${NAME} $?


bonus:		${BOBJS}
			${AR} ${ARFLAGS} ${NAME} ${BOBJS}

#~~~~ Compilation Rule ~~~~#

%.o : %.c	${HEADERS}
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I

#~~~~ Cleaning Rules ~~~~#
		
clean:
			${RM} ${OBJS} ${BOBJS}

fclean:		clean
			${RM} ${NAME}

#~~~~ Other Rules ~~~~#

re:			fclean all

.PHONY:		all bonus clean fclean re

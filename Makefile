# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 13:32:11 by gvilatte          #+#    #+#              #
#    Updated: 2022/10/06 13:18:52 by gvilatte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
NAME_BONUS = .bonus

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_atoi.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCSBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS =  ${SRCS:.c=.o}
OBJSBONUS = ${SRCSBONUS:.c=.o}
HEADER = libft.h

DEPS = ${SRCS:.c=.d}
DEPS_BONUS = ${SRCSBONUS:.c=.d}

RM = rm -Rf ..swp -o .ft_ -o
CFLAGS = -Wall -Wextra -Werror -MMD

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@

all :	${NAME}

-include $(DEPS)

${NAME} : ${OBJS} ${HEADER}
	ar rcs  ${NAME} ${OBJS}

bonus : ${NAME_BONUS}
   
${NAME_BONUS} :   ${OBJS} ${OBJSBONUS}
	ar rcs ${NAME} ${OBJS} ${OBJSBONUS}
	@touch $@
	
-include $(DEPS_BONUS)

clean :
	${RM} ${OBJS} ${OBJSBONUS}
	${RM} ${DEPS}
	${RM} ${DEPS_BONUS}

fclean :	clean
	${RM} ${NAME} ${NAME_BONUS}

re :	fclean all

.PHONY : all clean fclean re bonus

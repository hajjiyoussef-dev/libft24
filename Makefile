NAME  = libft.a 
SRC = ft_isalpha.c ft_isdigit.c  ft_isalnum.c  ft_isascii.c\
		ft_isprint.c ft_strlen.c  ft_memset.c ft_bzero.c  ft_atoi.c\
		ft_memcpy.c  ft_memmove.c ft_strlcpy.c ft_strchr.c\
		ft_tolower.c ft_toupper.c ft_strrchr.c ft_strchr.c\
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
		ft_calloc.c

OBJS = ${SRC:.c=.o}
LIBC = ar -rcs   # ar creat and archive statci library */
CC = gcc -Wall -Wextra -Werror 
RM = rm -f  # the cmd for remov the  files -f to force  the  removalof the files  

%.o: %.c libft.h
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS} 

all: ${NAME}

clean:
	${RM} ${OBJS} 

fclean: clean
	${RM} ${NAME} 

re: fclean all
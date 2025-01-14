NAME = push_swap

SRCS = push_swap.c parsing/errors.c utils/ft_atoi.c utils/ft_joinstr.c \
	utils/ft_split.c utils/ft_strlcpy.c utils/ft_strlen.c utils2/is_funct.c

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror -I./

all : ${NAME} build

build :

	@echo "$(MAGENTA) /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\ "
	@echo "$(MAGENTA)( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )"
	@echo "$(MAGENTA) > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ < "
	@echo "$(MAGENTA) /\_/\    ░█▀█░█░█░█▀▀░█░█░░░░░█▀▀░█░█░█▀█░█▀█    /\_/\ "
	@echo "$(MAGENTA)( o.o )   ░█▀▀░█░█░▀▀█░█▀█░░░░░▀▀█░█▄█░█▀█░█▀▀   ( o.o )"
	@echo "$(MAGENTA) > ^ <    ░▀░░░▀▀▀░▀▀▀░▀░▀░▀▀▀░▀▀▀░▀░▀░▀░▀░▀░░    > ^ < "
	@echo "(     )                 meow meow                (     )"
	@echo "$(MAGENTA) /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\ "
	@echo "$(MAGENTA)( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )"
	@echo "$(MAGENTA) > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ < $(RESET)"

MAGENTA=\033[35m


${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME} 

re : fclean all

.PHONY : all clean fclean re
CC = clang
CFLAGS = -Wall -Werror -Wextra

AR = ar
ARFLAGS = rcs

INCS = ft_printf.h
INCS_PATH = incs
SRCS_PATH = srcs

SRCS =	ft_printf.c			\
		ft_putnbr_base.c	\
		ft_put_nbr.c		\
		ft_putuns_nbr.c		\
		ft_putadd_p.c		\
		ft_putc.c			\
		ft_puthex.c			\
		ft_putn.c			\
		ft_puts.c			\
		ft_strlen.c			\

OBJS = $(addprefix $(SRCS_PATH)/, $(SRCS:.c=.o))

RM = rm -f

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJS)
		$(AR) $(ARFLAGS) $@ $(OBJS)

%.o: %.c $(INCS_PATH)/$(INCS)
		$(CC) $(CFLAGS) -I$(INCS_PATH) -c -o $@ $<


clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)


re : fclean all

.PHONY : all clean fclean re
NAME    = libftprintf.a

SRC     = ft_putadd.c ft_putchar.c ft_putnbr_base.c \
          ft_putnbr_ul.c ft_putnbr.c ft_putstr.c \
          ft_printf.c\

SRCSB	= ft_putnbr_bonus.c \
		  ft_printf_bonus.c ft_putnbbr_bonus.c\
		  ft_putadd_bonus.c ft_putchar_bonus.c ft_putnbr_base_bonus.c \
          ft_putnbr_ul_bonus.c ft_putstr_bonus.c\

OBJS    = $(SRC:.c=.o)
OBJSB   = $(SRCSB:.c=.o)

CC      = cc
CFLAGS  = -Wall -Werror -Wextra
RM      = rm -rf
AR      = ar rc

$(NAME): $(OBJS)

all: $(NAME)

bonus: $(OBJSB)

%.o: %.c printf.h
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean all

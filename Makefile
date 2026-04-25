NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRC_DIR = src
CORE_DIR = $(SRC_DIR)/core
PROC_DIR = $(SRC_DIR)/process
PRINT_DIR = $(SRC_DIR)/print
UTILS_DIR = $(SRC_DIR)/utils

SRC = ft_printf.c \
      $(CORE_DIR)/core_loop.c \
      $(CORE_DIR)/parse_format.c \
      $(CORE_DIR)/dispatcher.c \
      $(PROC_DIR)/process_char.c \
      $(PROC_DIR)/process_str.c \
      $(PROC_DIR)/process_ptr.c \
      $(PROC_DIR)/process_int.c \
      $(PROC_DIR)/process_uint.c \
      $(PROC_DIR)/process_hex.c \
      $(PROC_DIR)/process_percent.c \
      $(PRINT_DIR)/print_char.c \
      $(PRINT_DIR)/print_str.c \
      $(PRINT_DIR)/print_number.c \
      $(PRINT_DIR)/print_hex.c \
      $(PRINT_DIR)/print_ptr.c \
      $(PRINT_DIR)/print_padding.c \
      $(UTILS_DIR)/ft_strlen.c \
      $(UTILS_DIR)/ft_isdigit.c \
      $(UTILS_DIR)/ft_putchar.c \
      $(UTILS_DIR)/ft_putnchar.c \
      $(UTILS_DIR)/ft_putstrn.c \
      $(UTILS_DIR)/ft_utoa.c \
      $(UTILS_DIR)/ft_xtoa.c

OBJ = $(SRC:.c=.o)

HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

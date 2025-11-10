# Variables
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_found_d.c ft_found_p.c ft_found_s.c ft_found_x.c ft_putchar.c ft_found_u.c

OBJ = $(SRC:.c=.o)

# Default target (all)
all: $(NAME)

# Create static library libft.a
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Library $(NAME) created."

# Compile the source files into object files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $<"

# Clean up object files
clean:
	@rm -f $(OBJ)
	@echo "Object files removed."

# Clean and remove the library
fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed."

# Rebuild everything
re: fclean all
	@echo "Library rebuilt."
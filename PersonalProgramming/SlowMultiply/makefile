# Makefile for example program

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror

# Source files
SRC = $(wildcard *.c)

# Object files
OBJ = $(SRC:.c=.o)

# Header file
HEADERS = helper.h

# Target executable
TARGET = program

# Build rule
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

# Object file rules
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJ) $(TARGET)
CC = clang
CFLAGS = -Wall -Wextra -g

# Folders containing source files
SRC_DIRS = Search Sort DivideAndConquer

# Find all .c files in root and subdirectories
SOURCES = main.c $(wildcard $(addsuffix /*.c, $(SRC_DIRS)))
OBJECTS = $(SOURCES:.c=.o)
TARGET = dsa_project

all: $(TARGET)

# Link object files into final executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

# Compile .c files to .o object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean executable and compiled object files
clean:
	rm -f $(TARGET) $(OBJECTS)

.PHONY: all clean
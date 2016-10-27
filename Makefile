CC = gcc
CFLAGS = -g -Wall
TARGET = power
FILES = src/main.c src/utils.c

all: $(TARGET)

$(TARGET): src/main.c
	$(CC) $(CFLAGS) -o $(TARGET) $(FILES)

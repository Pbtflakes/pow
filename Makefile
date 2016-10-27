CC = gcc
CFLAGS = -g -Wall
TARGET = power
FILES = main.c

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) $(FILES)

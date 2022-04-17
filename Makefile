CC ?= gcc
SRC_FILE ?= ./src/test.c
INC_FILE ?= ./include/
BUILD_NAME ?= test

all:
	$(CC) $(SRC_FILE) -o $(BUILD_NAME) -I $(INC_FILE)

.PHONY:
clean:
	rm $(BUILD_NAME)
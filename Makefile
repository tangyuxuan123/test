CC ?= gcc
SRC_FILE ?= test.c
BUILD_NAME ?= test

all:
	$(CC) $(SRC_FILE) -o $(BUILD_NAME)

.PHONY:
clean:
	rm $(BUILD_NAME)
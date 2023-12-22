CC := gcc
CFLAGS := -Wall -Wextra

BIN_PATH := bin
SRC_PATH := src
OBJ_PATH := obj

TARGET := ${BIN_PATH}/memobf

.PHONY: all clean

all: ${OBJ_PATH}/main.o
	@mkdir -p ${BIN_PATH}
	@${CC} ${CFLAGS} -g -o ${TARGET} ${OBJ_PATH}/main.o

clean:
	@rm -rf ${BIN_PATH} ${OBJ_PATH}

${OBJ_PATH}/main.o: ${SRC_PATH}/main.c
	@mkdir -p ${OBJ_PATH}
	@${CC} ${CFLAGS} -g -c -o $@ $<

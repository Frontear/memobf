BUILD_DIR=${PWD}

all:
	mkdir -p ${BUILD_DIR}/build
	gcc -o ${BUILD_DIR}/build/main src/main.c

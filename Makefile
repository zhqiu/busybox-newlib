INCLUDES = -Ilibc/include -Ilibc/include/machine -Ilibc/include/sys -Imyterm
LIBS = -lc-native-newlib -los-native-newlib -lmyterm

DIR_SRC = ./prog
DIR_OBJ = ./bin

SRC = $(wildcard ${DIR_SRC}/*.c)
OBJ = $(patsubst %.c, ${DIR_OBJ}/%, $(notdir $(SRC)))

${DIR_OBJ}/% : ${DIR_SRC}/%.c
	gcc -g $(INCLUDES) $< -o $@ -L. $(LIBS)

target: ${OBJ}
	gcc -g $(INCLUDES) busybox.c -o busybox -L. $(LIBS)

clean:
	-rm ./bin/*
	-rm busybox

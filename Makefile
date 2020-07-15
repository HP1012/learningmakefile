SHELL = /bin/sh

CFLAGS = -Wall -g
CC = g++
LIBS = -lm

OBJS =  main.o
OBJS += target/lnmakefile.o

INCLUDES += -I "target/inc"
TARGET = hello

all: ${OBJS}
	$(CC) ${CFLAGS} ${INCLUDES} -o ${TARGET} ${OBJS} ${LIBS}
clean:
	find . -name "*.o" | xargs rm -f

.c.o:
	${CC} ${CFLAGS} ${INCLUDES} -o $@ -c $<
.cpp.o:
	${CC} ${CFLAGS} ${INCLUDES} -o $@ -c $<
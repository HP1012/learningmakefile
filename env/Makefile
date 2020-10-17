SHELL = /bin/sh

TARGET = ${DIR_BUILD}/result

DIR_SRC = ../src
DIR_INC = ../inc
DIR_BUILD = ../bin

CFLAGS = -Wall -g
CC = g++
LIBS = -lm

OBJS =  ${DIR_BUILD}/main.o
OBJS += ${DIR_BUILD}/lnmakefile.o

GOBJS =  ${DIR_SRC}/main.o
GOBJS += ${DIR_SRC}/lnmakefile.o

INCLUDES += -I ${DIR_INC}
# LINK OJB
all: ${GOBJS}
	$(CC) ${CFLAGS} ${INCLUDES} -o ${TARGET} ${OBJS} ${LIBS}
# BUILD OJB
.c.o:
	${CC} ${CFLAGS} ${INCLUDES} -o ${DIR_BUILD}/$(shell basename $@) -c $<
.cpp.o:
	${CC} ${CFLAGS} ${INCLUDES} -o ${DIR_BUILD}/$(shell basename $@) -c $<
#  CLEAN
clean:
	find ../ -name "*.o" | xargs rm -f
	rm -f ${TARGET}
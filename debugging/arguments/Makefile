#Makefile
#which compiler
CC=gcc
TARGET=arguments
SRC=arguments.c
#software developement options
CFLAGS= -g -Wall
OBJS=arguments.o
#Installation Directory
INSTDIR=/home/raju/rama


all: $(TARGET)
$(TARGET):	$(OBJS)
	$(CC) $(OBJS) -o $(TARGET)
$(OBJS):	$(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -rf *.o  $(TARGET)



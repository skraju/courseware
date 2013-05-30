#Makefile

all: myapp hello world
myapp:	main.o add.o sub.o mul.o
	gcc main.o add.o sub.o mul.o -o myapp
main.o:	main.c
	gcc -c main.c
add.o:	add.c
	gcc -c add.c
sub.o:	sub.c
	gcc -c sub.c
mul.o:	mul.c
	gcc -c mul.c
hello: hello.o
hello.o: hello.c	
	gcc -c hello.c
world: world.o
world.o: world.c	
	gcc -c world.c


clean:
	rm -rf *.o myapp
install:
	@echo "hi how are you"	

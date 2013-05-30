#Static Library creation

step1: Make source files ready

step2: Create object files for the source codes
	gcc -c filename.c 

step3: Create archive using the object files
	ar -crv libourown.a add.o sub.o mul.o 


# create an application to use this library and compile the application as follows
	
	gcc -static main.c libmy.a -o main


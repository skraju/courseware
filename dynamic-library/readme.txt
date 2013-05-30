#Dynamic Library Creation 

step1: Make source files ready

step2: Create object files for the source codes
	gcc -c -fPIC filename.c 

step3: Create shared library using the object files
	gcc -shared -o libourown.so add.o sub.o mul.o

# create an application to use this library and compile the application as follows
	
	gcc main.c -o main ./libourown.so


0x1C. C - Makefiles
Makefile sets a set of rules to determine which parts of a program need to be recompile, and issues command to recompile them. • Makefile is a way of automating software building procedure and other complex tasks with dependencies.
How to Create a Makefile
A Makefile is a simple text file that can be created with any text editor. The basic syntax of a Makefile is as follows:

target: dependencies
	commands
The target is the name of the rule you want to create. The dependencies are the files or targets that the rule depends on. The commands are the actions that are executed to build the target.
Here is an example Makefile that builds a sample C program:
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic

all: hello

hello: hello.o
	$(CC) $(CFLAGS) -o hello_ hello_.o

hello_.o: hello.c
	$(CC) $(CFLAGS) -c hello_.c

clean:
	rm -f *.o hello_
In this example, we define the C compiler and flags that we want to use. We then create a rule called "all," which depends on a target called "hello_." The "hello_" target depends on a file called "hello_.o." The commands for the "hello_" target compile the object file and link it into an executable. The "hello_.o" target compiles the C source file into an object file. Finally, we define a "clean" target that removes any object files and executables.
Running a Makefile
To run a Makefile, you simply need to type "make" in the terminal. The Make tool will then read the Makefile and execute the commands necessary to build the target you specified.
$ make hello_
In this example, we build the "hello_" target defined in the Makefile.
Makefile Best Practices
When creating a Makefile, there are several best practices that you should follow to ensure that your build process is as efficient and error-free as possible:
•	Use variables for common settings, such as the compiler and flags.
•	Define a "clean" target to remove any generated files.
•	Use dependency chains to ensure that files are compiled in the correct order.
•	Use wildcards to simplify the process of generating lists of files.
•	Use suffix rules or pattern rules to avoid duplicating rules for similar files.
•	Use phony targets to define targets that don't correspond to files.



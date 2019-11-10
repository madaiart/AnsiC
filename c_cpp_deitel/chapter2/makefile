# Makefile crated by Madai Arteaga November 09, 2019
#
# This file reads current directory and compile all files.
# This makefile only works for files without headers or dependent files

# NOTE: For executing this file just write make in the right directory.

SOURCES := $(shell find $(SOURCEDIR) -name '*.c')
OBJECTS = $(patsubst ./%.c, %, $(SOURCES))
CC = gcc
CFLAGS  = -g -Wall

# Compiles all files
all: $(OBJECTS)
	for file in $(OBJECTS); do\
		$(CC) $(CFLAGS) -o $$file $$file.c;\
	done

# Prints the files for compiling
print:
	@echo $(OBJECTS)

# Remove all executables from current directory
clean:
	for file in $(OBJECTS); do\
		$(RM) $$file;\
	done
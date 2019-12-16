# Makefile for test-cslib
# ***************************************************************

PROGRAMS = house

# ***************************************************************
# Parameters to control Makefile operation
# Note that the gccx command script must be defined

CC = gcc
CFLAGS = -I${HOME}/root/include/cslib -g -Wall -std=gnu11 -O3
LDLIBS = -L${HOME}/root/lib/ -lcs -lm

# ***************************************************************
# Entry to bring the package up to date

all: $(PROGRAMS)

# ***************************************************************
# Standard entries to remove files from the directories
#    tidy    -- eliminate unwanted files
#    scratch -- delete derived files in preparation for rebuild

tidy:
	rm -f ,* .,* *~ core a.out graphics.ps

scratch: tidy
	rm -f *.o *.a $(PROGRAMS)

# ***************************************************************
# C compilations

house.o: house.c
	$(CC) $(CFLAGS) -c house.c

house: house.o
	$(CC) $(CFLAGS) -o house house.o $(LDLIBS)

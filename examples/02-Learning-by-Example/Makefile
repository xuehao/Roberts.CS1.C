# Makefile for cbook/02-Learning-by-Example/programs
# Created by the ExportAll facility
# ***************************************************************

PROGRAMS = \
    hello \
    add2 \
    add2f \
    greeting \
    inchtocm \
    ave2f \
    cmtofeet

# ***************************************************************
# Parameters to control Makefile operation
# Note that the gccx command script must be defined

CC = gcc
CFLAGS=-I${HOME}/root/include/cslib -g -Wall -std=gnu11 -O3
LDLIBS=-L${HOME}/root/lib -l:cslib.a -lm

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

hello.o: hello.c
	$(CC) $(CFLAGS) -c hello.c

add2.o: add2.c
	$(CC) $(CFLAGS) -c add2.c

add2f.o: add2f.c
	$(CC) $(CFLAGS) -c add2f.c

greeting.o: greeting.c
	$(CC) $(CFLAGS) -c greeting.c

inchtocm.o: inchtocm.c
	$(CC) $(CFLAGS) -c inchtocm.c

ave2f.o: ave2f.c
	$(CC) $(CFLAGS) -c ave2f.c

cmtofeet.o: cmtofeet.c
	$(CC) $(CFLAGS) -c cmtofeet.c


hello: hello.o
	$(CC) $(CFLAGS) -o hello hello.o $(LDLIBS)

add2: add2.o
	$(CC) $(CFLAGS) -o add2 add2.o $(LDLIBS)

add2f: add2f.o
	$(CC) $(CFLAGS) -o add2f add2f.o $(LDLIBS)

greeting: greeting.o
	$(CC) $(CFLAGS) -o greeting greeting.o $(LDLIBS)

inchtocm: inchtocm.o
	$(CC) $(CFLAGS) -o inchtocm inchtocm.o $(LDLIBS)

ave2f: ave2f.o
	$(CC) $(CFLAGS) -o ave2f ave2f.o $(LDLIBS)

cmtofeet: cmtofeet.o
	$(CC) $(CFLAGS) -o cmtofeet cmtofeet.o $(LDLIBS)

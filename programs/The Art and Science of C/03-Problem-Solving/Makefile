# Makefile for cbook/03-Problem-Solving/programs
# Created by the ExportAll facility
# ***************************************************************

PROGRAMS = \
    count10 \
    add10 \
    addlist \
    balance1 \
    balance2 \
    balance3 \
    balance4 \
    roses

# ***************************************************************
# Parameters to control Makefile operation
# Note that the gccx command script must be defined

CC = gcc
CFLAGS=-I${HOME}/root/include/cslib -g -Wall -std=gnu11 -O3
LDLIBS=-L${HOME}/root/lib -lcs -lm

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

count10.o: count10.c
	$(CC) $(CFLAGS) -c count10.c

add10.o: add10.c
	$(CC) $(CFLAGS) -c add10.c

addlist.o: addlist.c
	$(CC) $(CFLAGS) -c addlist.c

balance1.o: balance1.c
	$(CC) $(CFLAGS) -c balance1.c

balance2.o: balance2.c
	$(CC) $(CFLAGS) -c balance2.c

balance3.o: balance3.c
	$(CC) $(CFLAGS) -c balance3.c

balance4.o: balance4.c
	$(CC) $(CFLAGS) -c balance4.c

roses.o: roses.c
	$(CC) $(CFLAGS) -c roses.c


count10: count10.o
	$(CC) $(CFLAGS) -o count10 count10.o $(LDLIBS)

add10: add10.o
	$(CC) $(CFLAGS) -o add10 add10.o $(LDLIBS)

addlist: addlist.o
	$(CC) $(CFLAGS) -o addlist addlist.o $(LDLIBS)

balance1: balance1.o
	$(CC) $(CFLAGS) -o balance1 balance1.o $(LDLIBS)

balance2: balance2.o
	$(CC) $(CFLAGS) -o balance2 balance2.o $(LDLIBS)

balance3: balance3.o
	$(CC) $(CFLAGS) -o balance3 balance3.o $(LDLIBS)

balance4: balance4.o
	$(CC) $(CFLAGS) -o balance4 balance4.o $(LDLIBS)

roses: roses.o
	$(CC) $(CFLAGS) -o roses roses.o $(LDLIBS)

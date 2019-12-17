# Makefile for 07-Graphics
# ***************************************************************

PROGRAMS = \
    arc1 \
    arc2 \
    drawcirc \
    drawcbox \
    oneline \
    drawbox \
    house

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

arc1.o: arc1.c
	$(CC) $(CFLAGS) -c arc1.c

arc2.o: arc2.c
	$(CC) $(CFLAGS) -c arc2.c

drawcirc.o: drawcirc.c
	$(CC) $(CFLAGS) -c drawcirc.c

drawcbox.o: drawcbox.c
	$(CC) $(CFLAGS) -c drawcbox.c

oneline.o: oneline.c
	$(CC) $(CFLAGS) -c oneline.c

drawbox.o: drawbox.c
	$(CC) $(CFLAGS) -c drawbox.c

house.o: house.c
	$(CC) $(CFLAGS) -c house.c


arc1: arc1.o
	$(CC) $(CFLAGS) -o arc1 arc1.o $(LDLIBS)

arc2: arc2.o
	$(CC) $(CFLAGS) -o arc2 arc2.o $(LDLIBS)

drawcirc: drawcirc.o
	$(CC) $(CFLAGS) -o drawcirc drawcirc.o $(LDLIBS)

drawcbox: drawcbox.o
	$(CC) $(CFLAGS) -o drawcbox drawcbox.o $(LDLIBS)

oneline: oneline.o
	$(CC) $(CFLAGS) -o oneline oneline.o $(LDLIBS)

drawbox: drawbox.o
	$(CC) $(CFLAGS) -o drawbox drawbox.o $(LDLIBS)

house: house.o
	$(CC) $(CFLAGS) -o house house.o $(LDLIBS)

# Makefile for cslib directory
# Last modified in December, 2019 by xuehao
#****************************************************************

OBJECTS = \
    genlib.o \
    exception.o \
    strlib.o \
    simpio.o \
    random.o \
    graphics.o

CSLIB = libcs.a

CC = gcc
CFLAGS = -g -I. $(CCFLAGS)

# ***************************************************************
# Entry to bring the package up to date
#    The "make all" entry should be the first real entry

all: $(CSLIB) root

# ***************************************************************
# Standard entries to remove files from the directories
#    tidy    -- eliminate unwanted files
#    clean   -- delete derived files in preparation for rebuild
#    scratch -- synonym for clean

tidy:
	rm -f ,* .,* *~ core a.out *.err

clean scratch: tidy
	rm -f *.o *.a
	rm -r root

# ***************************************************************
# C compilations

genlib.o: genlib.c genlib.h exception.h gcalloc.h
	$(CC) $(CFLAGS) -c genlib.c

exception.o: exception.c exception.h genlib.h
	$(CC) $(CFLAGS) -c exception.c

strlib.o: strlib.c strlib.h genlib.h
	$(CC) $(CFLAGS) -c strlib.c

simpio.o: simpio.c simpio.h strlib.h genlib.h
	$(CC) $(CFLAGS) -c simpio.c

graphics.o: graphics.c graphics.h genlib.h
	$(CC) $(CFLAGS) -c graphics.c

random.o: random.c random.h genlib.h
	$(CC) $(CFLAGS) -c random.c

# ***************************************************************
# Entry to reconstruct the library archive

$(CSLIB): $(OBJECTS)
	-rm -f $(CSLIB)
	ar cr $(CSLIB) $(OBJECTS)
	ranlib $(CSLIB)

root:
	rm *.o
	mkdir root
	mkdir root/include root/lib
	mkdir root/include/cslib
	cp *.h ./root/include/cslib
	mv $(CSLIB) root/lib

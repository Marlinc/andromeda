include ../scripts/makeIncl
CFLAGS+=-I../include
LDFLAGS=-r -nostdlib --oformat=elf32-i386 -melf_i386

INCLUDES=../include/fs/stream.h ../include/fs/file.h ../include/fs/vfs.h\
../include/fs/path.h

.PHONY: all
all: path.o ramfs.o vfs.o procfs.o
	$(LD) -o fs.o *.o $(LDFLAGS)
	mv fs.o ../

path.o: path.c
	$(CC) $(CFLAGS) $(FLAGS) path.c

vfs.o: vfs.c
	$(CC) $(CFLAGS) $(FLAGS) vfs.c

ramfs.o:
	$(MAKE) -C ramfs/
	mv rfs.o ramfs.o

procfs.o:
	$(MAKE) -C procfs/

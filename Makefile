CFLAGS=-c -Wall -O2

all: libnokia5110.a

libnokia5110.a: nokia5110.o fonts.o
	ar -rc libnokia5110.a nokia5110.o fonts.o ;\
	sudo cp libnokia5110.a /usr/local/lib ;\
	sudo cp nokia5110.h /usr/local/include

fonts.o: fonts.c
	$(CC) $(CFLAGS) fonts.c

nokia5110.o: nokia5110.c
	$(CC) $(CFLAGS) nokia5110.c

clean:
	rm -rf *o libnokia5110.a


CC=gcc
CFLAGS=-c -Wall -std=c11 -Isrc/include

SRC=src
INCL=src/include
OUTNAME=phonebook

$(OUTNAME): mongoose.o phonebook.o starter.o
	$(CC) mongoose.o phonebook.o starter.o -o $(OUTNAME)
	
mongoose.o: $(SRC)/mongoose.c
	$(CC) $(CFLAGS) $(SRC)/mongoose.c $(INCL)/mongoose.h

phonebook.o: $(SRC)/phonebook.c
	$(CC) $(CFLAGS) $(SRC)/phonebook.c $(INCL)/phonebook.h
	
starter.o: $(SRC)/starter.c
	$(CC) $(CFLAGS) $(SRC)/starter.c $(INCL)/phonebook.h
	
clean: *.o $(INCL)/*.gch
	rm -rf *.o $(INCL)/*.gch

install: $(OUTNAME)
	mv $(OUTNAME) $(HOME)/bin

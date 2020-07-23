#headers
IDIR=include
#cpp
SDIR=src
#binary directory
BIN=.
#output
OUTPUT=output
#libs
LDIR=lib


CC=gcc
CFLAGS=-I$(IDIR)

LIBS=

_DEPS = int_list.h
_SRC = main.c int_list.c

DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
SRC = $(patsubst %,$(SDIR)/%,$(_SRC))


$(BIN)/$(OUTPUT): $(SRC)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean



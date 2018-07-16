NAME = icywm
PREFIX ?= /usr/local
BINDIR ?= ${PREFIX}/bin
MANPREFIX = ~{PREFIX}/share/man

X11INC = -I/usr/X11R6/include
X11LIB = -L/usr/X11R6/lib -lX11

 INCS = -I. -I/usr/include ${X11INC}
 LIBS = -L/usr/lib -lc ${X11LIB}

CFLAGS   = -std=c++17 -pedantic -Wall -Wextra ${INCS}
LDFLAGS  = ${LIBS}

CC = g++

all: 
	${CC} ${CFLAGS} icywm.cpp -o icywm

clean:
	rm -rf icywm


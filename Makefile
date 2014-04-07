CC=g++
CFLAGS= -lglut -lGLU
PROGRAM=pacman
PROGSRCDIR=PacmanParty
PROGSRC=$(wildcard $(PROGSRCDIR)/*.cpp)

all: pacman

pacman: $(PROGSRC)
	$(CC) $(PROGSRC) $(CFLAGS) -o $(PROGRAM)

clean:
	rm -rf $(PROGRAM)

# Today I learned - TIL
# makefiles
# https://www.cs.umd.edu/class/fall2002/cmsc214/Tutorial/makefile.html
all: init map

init:
	mkdir -p bin

map: map.cpp
	g++ map.cpp -o bin/map -lglut -lGL
# Today I learned - TIL
# makefiles
# https://www.cs.umd.edu/class/fall2002/cmsc214/Tutorial/makefile.html
all: init bins

init:
	mkdir -p bin

bins: src/map.cpp src/dots.cpp
	g++ src/map.cpp -o bin/map -lglut -lGL -lGLU
	g++ src/dots.cpp -o bin/dots -lglut -lGL -lGLU
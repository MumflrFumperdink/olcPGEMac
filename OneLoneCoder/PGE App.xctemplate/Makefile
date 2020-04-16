LIBRARIES = -framework OpenGL -framework GLUT -lpng

EXE = output

all:
	clang++ -arch x86_64 -std=c++14 -Wall $(LIBRARIES) main.cpp -o $(EXE)
clean:
	-rm $(EXE)
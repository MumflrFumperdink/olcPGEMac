LIBRARIES = -framework OpenGL -framework GLUT -framework Carbon -lpng

EXE = output
#for apple silicon change the -arch value to arm64
all:
	clang++ -arch x86_64 -std=c++17 -mmacosx-version-min=10.15 -Wall $(LIBRARIES) main.cpp -o $(EXE)
clean:
	-rm $(EXE)

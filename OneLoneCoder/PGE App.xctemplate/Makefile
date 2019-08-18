LIBRARIES = -framework Cocoa -framework Quartz -framework OpenGL -lcocoawindowing_s -lpng
LIBDIR = -L ./bin
INCLUDEDIR = -I ./include

EXE = output

all:
	clang++ -arch x86_64 -std=c++14 -Wall $(LIBRARIES) $(LIBDIR) $(INCLUDEDIR) App/*.cpp -o $(EXE)
clean:
	-rm $(EXE)
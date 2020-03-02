FNS=functions.cpp
MAIN=main.cpp $(FNS)

all:
	g++ $(MAIN) -o TestComplex
clean:
	rm TestComplex

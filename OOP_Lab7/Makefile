CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iinc

EXE = Lab07
CPP = main
HEAD = src/Cylinder

OBJS = $(CPP).o $(HEAD).o

all: $(EXE)

$(EXE): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXE)

$(CPP).o: $(CPP).cpp inc/Cylinder.h
	$(CXX) $(CXXFLAGS) -c $(CPP).cpp -o $(CPP).o

$(HEAD).o: $(HEAD).cpp inc/Cylinder.h
	$(CXX) $(CXXFLAGS) -c $(HEAD).cpp -o $(HEAD).o

clean:
	rm -f $(OBJS) $(EXE)

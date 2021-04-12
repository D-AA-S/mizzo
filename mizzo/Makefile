# Kathryn Shafer  821586552
# Daniel A. Silva 820567716

CXX=g++
CXXFLAGS=-std=c++11 -g


mizzo : Source.o Belt.o Producers.o Consumers.o
	$(CXX) $(CXXFLAGS) -o mizzo $^

Belt.o : Belt.cpp Belt.h

Source.o : Source.cpp

Producers.o : Producers.h Producers.cpp

Consumers.o : Consumers.h Consumers.cpp
	
clean :
	rm *.o pagetable
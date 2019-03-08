CC = gcc
CXX = g++



DEBUGFLAG=-DDEBUG -g3
RELEASEFLAG= -O3 -march=native -DARMA_NO_DEBUG
CXXFLAGS=  -std=c++0x $(BOOST_INCLUDE) -D__LINUX  -fopenmp
LDFLAG= -lpthread -fopenmp
OBJ=openMPHelloWorld.o
all:test.exe 
test.exe: $(OBJ)
	$(CXX) -o $@ $^ $(LDFLAG) 
	
%.o:%.cpp
	$(CXX) -c $(CXXFLAGS) $(RELEASEFLAG) $^
	


clean:
	rm *.o *.exe
	

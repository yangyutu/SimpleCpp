CC = gcc
CXX = g++

HOME=/home/yuguangyang/
BOOST_INCLUDE=-I/opt/boost/boost_1_57_0


DEBUGFLAG=-DDEBUG -g3
RELEASEFLAG= -O3 -march=native -DARMA_NO_DEBUG
CXXFLAGS=  -std=c++0x $(BOOST_INCLUDE) -D__LINUX  

OBJ=hello.o
all:test.exe 
test.exe: $(OBJ)
	$(CXX) -o $@ $^ $(LDFLAG) 
	
%.o:%.cpp
	$(CXX) -c $(CXXFLAGS) $(RELEASEFLAG) $^
	


clean:
	rm *.o *.exe
	

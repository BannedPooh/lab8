all: newanagram
newanagram: newanagram.cpp headers.h functions.cpp
	g++ -o newanagram newanagram.cpp -Wall -std=c++11

# CXX = g++
# CXXFLAG = -Wall -std=c++11

# BIN = test

# SRC = $(wildcard *.cpp)
# OBJ = $(patsubst %.cpp, %.o, $(SRC))

# all: ${BIN}

# test: $(OBJ)
# 	$(CXX) $^ -o $@

# %.o: %.cpp
# 	$(CXX) $(CXXFLAG) -c -o $@ $<

# clean:
# 	rm -rf ${BIN} %.o

all: newanagram
newanagram: newanagram.cpp headers.h functions.cpp
	g++ -o newanagram newanagram.cpp functions.cpp -Wall -std=c++11
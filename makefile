all : assignment

assignment.o : assignment.cpp
	g++ -c assignment.cpp

assignment : assignment.o

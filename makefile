all : assignment
assignment : assignment.o
    g++ -o assignment assignment.o
    
assignment.o : assignment.cpp
	g++ -c assignment.cpp



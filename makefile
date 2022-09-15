all : submission

submission : assignment.o
	g++ -o submission assignment.o
    
assignment.o : assignment.cpp
	g++ -c assignment.cpp



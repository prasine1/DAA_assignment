all : submission

submission : submission.o
	g++ -o submission submission.o
    
submission.o : assignment.cpp
	g++ -c assignment.cpp



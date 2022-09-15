all : submission

submission.o : submission.cpp
	g++ -c submission.cpp

submission : submission.o
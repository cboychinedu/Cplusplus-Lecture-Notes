all: add.o substract.o
	g++ main.cpp add.o substraction.o -o main

add.o: modules/add.cpp
	g++ -c modules/add.cpp 

substract.o: modules/substraction.cpp
	g++ -c modules/substraction.cpp

clean:
	rm -f *.o main 


all: main.out

main.out: main.o Date.o
	g++ main.o Date.o -o main.out

main.o: main.cpp
	g++ -c main.cpp --std=c++11

Date.o: Date.cpp
	g++ -c Date.cpp --std=c++11

clean:
	rm *.o main.out
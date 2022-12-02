all: main.out

main.out: main.o
	g++ main.o -o main.out

main.o: main.cpp
	g++ -c main.cpp --std=c++11

clean:
	rm *.o main.out
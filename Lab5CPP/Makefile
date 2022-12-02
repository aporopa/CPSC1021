all: main.out

main.out: main.o Invoice.o Customer.o Car.o
	g++ main.o Invoice.o Customer.o Car.o -o main.out

main.o: main.cpp
	g++ -c main.cpp --std=c++11

Invoice.o: Invoice.cpp
	g++ -c Invoice.cpp --std=c++11

Customer.o: Customer.cpp
	g++ -c Customer.cpp --std=c++11

Car.o: Car.cpp
	g++ -c Car.cpp --std=c++11

clean:
	rm *.o main.out
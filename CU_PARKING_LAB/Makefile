all: main.out

main.out: main.o Invoice.o Customer.o Vehicle.o
	g++ main.o Invoice.o Customer.o Vehicle.o -o main.out

main.o: main.cpp
	g++ -c main.cpp --std=c++11

Invoice.o: Invoice.cpp
	g++ -c Invoice.cpp --std=c++11

Customer.o: Customer.cpp
	g++ -c Customer.cpp --std=c++11

Vehicle.o: Vehicle.cpp
	g++ -c Vehicle.cpp --std=c++11

clean:
	rm *.o main.out
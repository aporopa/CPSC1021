all: main.out

main.out: hospitalCharges.o Patient.o
	g++ hospitalCharges.o Patient.o -o main.out

hospitalCharges.o: hospitalCharges.cpp
	g++ -c hospitalCharges.cpp --std=c++11

Patient.o: Patient.cpp
	g++ -c Patient.cpp --std=c++11

clean:
	rm *.o main.out
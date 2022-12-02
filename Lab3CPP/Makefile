all: main.out

main.out: areaCalc.o Rectangle.o Circle.o Square.o Trapezoid.o
	g++ areaCalc.o Rectangle.o Circle.o Square.o Trapezoid.o -o main.out

areaCalc.o: areaCalc.cpp
	g++ -c areaCalc.cpp

Rectangle.o: Rectangle.cpp
	g++ -c Rectangle.cpp

Circle.o: Circle.cpp
	g++ -c Circle.cpp

Square.o: Square.cpp
	g++ -c Square.cpp

Trapezoid.o: Trapezoid.cpp
	g++ -c Trapezoid.cpp

clean:
	rm *.o main.out

FLAGS = -g -arch arm64 --std=c++17
CC = g++

all:
	mkdir -p obj
	mkdir -p bin
	$(CC) $(FLAGS) -c src/calculadora.cpp -o obj/calculadora.o
	$(CC) $(FLAGS) -shared -o bin/libcalculadora.so obj/calculadora.o
	mkdir -p bin/include
	cp src/calculadora.h ./bin/include
	doxygen
	
test:
	mkdir -p obj
	mkdir -p bin
	g++ $(FLAGS) src/calculadora.cpp -o obj/calculadora.o
	g++ $(FLAGS) tests/calculadora_tests.cpp -o obj/calculadora_tests.o
	g++ -g -o bin/tests obj/calculadora.o obj/calculadora_tests.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin


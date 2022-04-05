all:
	mkdir -p bin
	g++ -g -c --std=c++17 src/calculadora.cpp -o bin/calculadora.o
	
test:
	mkdir -p bin
	g++ -g -c --std=c++17 tests/calculadora_tests.cpp -o bin/calculadora_tests.o
	g++ -g -c --std=c++17 src/calculadora.cpp -o bin/calculadora.o
	g++ -g -o bin/tests -lgtest -lgtest_main -lpthread bin/calculadora_tests.o bin/calculadora.o

clean:
	rm -Rf bin


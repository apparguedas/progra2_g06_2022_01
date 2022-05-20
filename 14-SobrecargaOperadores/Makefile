FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/fraccion.cpp -o bin/fraccion.o
	g++ -shared -o bin/libfraccion.so bin/fraccion.o
	
test:
	mkdir -p bin
	g++ $(FLAGS) src/fraccion.cpp -o bin/fraccion.o
	g++ $(FLAGS) tests/fraccion_tests.cpp -o bin/fraccion_tests.o
	g++ -g -o bin/tests bin/fraccion.o bin/fraccion_tests.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin


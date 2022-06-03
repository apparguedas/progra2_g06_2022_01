FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ $(FLAGS) src/empleado.cpp -o bin/empleado.o
	g++ $(FLAGS) src/planilla.cpp -o bin/planilla.o
	g++ -o bin/ejemplo17 bin/main.o bin/empleado.o bin/planilla.o
	
test:
	mkdir -p bin
	g++ $(FLAGS) src/calculadora.cpp -o bin/calculadora.o
	g++ $(FLAGS) tests/calculadora_tests.cpp -o bin/calculadora_tests.o
	g++ -g -o bin/tests bin/calculadora.o bin/calculadora_tests.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin

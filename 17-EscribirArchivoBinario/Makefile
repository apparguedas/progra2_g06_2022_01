FLAGS = -g -c --std=c++17


all:
	mkdir -p bin
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ $(FLAGS) src/empleado.cpp -o bin/empleado.o
	g++ $(FLAGS) src/planilla.cpp -o bin/planilla.o
	g++ -o bin/ejemplo17 bin/main.o bin/empleado.o bin/planilla.o
	
test:
	mkdir -p bin
	g++ $(FLAGS) src/empleado.cpp -o bin/empleado.o
	g++ $(FLAGS) src/planilla.cpp -o bin/planilla.o
	g++ $(FLAGS) tests/planilla_test.cpp -o bin/planilla_test.o
	g++ -g -o bin/tests bin/empleado.o bin/planilla.o bin/planilla_test.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin
	rm *.dat

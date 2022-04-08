FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/nodo.cpp -o bin/nodo.o
	g++ $(FLAGS) src/lista.cpp -o bin/lista.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/lista bin/nodo.o bin/lista.o bin/main.o
	
clean:
	rm -Rf bin



FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/categoria.cpp -o bin/categoria.o
	g++ $(FLAGS) src/catalogo.cpp -o bin/catalogo.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	cp ./categorias.txt ./bin/categorias.txt
	g++ -g -o bin/catalogo bin/categoria.o bin/catalogo.o bin/main.o
	
test:
	mkdir -p bin
	g++ $(FLAGS) src/arbol.cpp -o bin/arbol.o
	g++ $(FLAGS) src/nodo.cpp -o bin/nodo.o
	g++ $(FLAGS) tests/arbol_tests.cpp -o bin/arbol_tests.o
	g++ $(FLAGS) tests/nodo_tests.cpp -o bin/nodo_tests.o
	g++ -g -o bin/tests bin/arbol.o bin/nodo.o bin/arbol_tests.o bin/nodo_tests.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin


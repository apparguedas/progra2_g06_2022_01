FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	cp ./lib/libcalculadora.so ./bin
	g++ -g -o bin/ejemplo13 bin/main.o -L./lib -lcalculadora
	
clean:
	rm -Rf bin


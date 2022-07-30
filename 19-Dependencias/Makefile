FLAGS = -g --std=c++17
CC = g++

all:
	mkdir -p obj
	mkdir -p bin
	$(CC) $(FLAGS) -c src/consolidadorTransaccionesAColones.cpp -o obj/consolidadorTransaccionesAColones.o
	$(CC) $(FLAGS) -c src/transaccion.cpp -o obj/transaccion.o
	$(CC) $(FLAGS) -shared -o bin/libtransacciones.so obj/consolidadorTransaccionesAColones.o obj/transaccion.o
	mkdir -p bin/include
	cp src/consolidadorTransaccionesAColones.h ./bin/include
	cp src/transaccion.h ./bin/include
	doxygen
	
test:
	mkdir -p obj
	mkdir -p bin
	$(CC) $(FLAGS) -c src/consolidadorTransaccionesAColones.cpp -o obj/consolidadorTransaccionesAColones.o
	$(CC) $(FLAGS) -c src/transaccion.cpp -o obj/transaccion.o
	$(CC) $(FLAGS) -c tests/proveedorTipoCambioPrueba.cpp -o obj/proveedorTipoCambioPrueba.o
	$(CC) $(FLAGS) -c tests/proveedorTransaccionesPrueba.cpp -o obj/proveedorTransaccionesPrueba.o
	$(CC) $(FLAGS) -c tests/consolidadorTransacciones_tests.cpp -o obj/consolidadorTransacciones_tests.o
	
	$(CC) $(FLAGS) -o bin/tests obj/consolidadorTransaccionesAColones.o obj/transaccion.o obj/proveedorTipoCambioPrueba.o obj/proveedorTransaccionesPrueba.o obj/consolidadorTransacciones_tests.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin
	rm -Rf doc


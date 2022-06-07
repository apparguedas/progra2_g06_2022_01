#include "empleado.h"
#include "planilla.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

    /*cout << "Tamaño en bytes de una variable int: " << sizeof(int) << endl;
    cout << "Tamaño en bytes de una variable short: " << sizeof(short) << endl;
    cout << "Tamaño en bytes de una variable long: " << sizeof(long) << endl;
    cout << "Tamaño en bytes de una variable float: " << sizeof(float) << endl;
    cout << "Tamaño en bytes de una variable double: " << sizeof(double) << endl;
    cout << "Tamaño en bytes de una variable empleado: " << sizeof(Empleado) << endl; */   

    
    /* Ejemplo de guardar una planilla en un archivo binario
    Empleado *empleado1 = new Empleado(1, 20, "Maria");
    Empleado *empleado2 = new Empleado(2, 25, "Juan");
    Empleado *empleado3 = new Empleado(3, 22, "Pedro");
    Empleado *empleado4 = new Empleado(4, 2022, "Cristo");

    Planilla *planilla = new Planilla();
    planilla->AgregarEmpleado(empleado1);
    planilla->AgregarEmpleado(empleado2);
    planilla->AgregarEmpleado(empleado3);
    planilla->AgregarEmpleado(empleado4);

    ofstream archivoSalida;
    archivoSalida.open("planilla.dat", ios::out|ios::binary);

    if (!archivoSalida.is_open())
    {
        cerr << "No se pudo abrir archivo planilla.dat para escribir los datos";
        return -1;
    }

    planilla->GuardarEnStreamBinario(&archivoSalida);

    archivoSalida.close();

    delete planilla;*/

    // Ejemplo de leer una planilla desde un archivo binario
    ifstream archivoEntrada;
    archivoEntrada.open("planilla.dat", ios::in|ios::binary);

    if (!archivoEntrada.is_open())
    {
        cerr << "No se pudo abrir archivo planilla.dat para leer los datos";
        return -1;
    }
    
    Planilla *planilla = new Planilla();

    planilla->CargarDesdeStreamBinario(&archivoEntrada);

    cout << planilla;

    delete planilla;

    archivoEntrada.close();
}
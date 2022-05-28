#include <sstream>
#include <iostream>
#include <string>
#include <fstream>

#include "catalogo.h"
#include "categoria.h"

using namespace std;

int main() {

    // Ejemplo 1: lectura y escritura de una categoría
    /*
    Categoria *nuevaCategoria = new Categoria();
    
    string entrada = "2 Limpieza 0";
    istringstream streamStringsEntrada(entrada);
    ostringstream streamStringsSalida {};

    streamStringsEntrada >> nuevaCategoria;
    streamStringsSalida << "La nueva categoria es " << nuevaCategoria << endl;

    std::cout << streamStringsSalida.str();
    
    delete nuevaCategoria;
    */
    
    /*
    // Ejemplo 2: escritura de un catálogo
    Catalogo *catalogo = new Catalogo();

    Categoria *categoria1 = new Categoria(1, "Alimentos", 100);
    catalogo->AgregarCategoria(categoria1);

    Categoria *categoria2 = new Categoria(2, "Limpieza", 200);
    catalogo->AgregarCategoria(categoria2);

    ofstream reporte("reporteCatalogo.csv", std::ifstream::out); // Por default abriendo como texto

    if (!reporte.is_open())
    {
        std::cerr << "Error abriendo archivo reporteCatalogo.txt" << std::endl;
        return -1;
    }

    reporte << catalogo;

    reporte.close();

    delete catalogo;
    */

   
    // Ejemplo 3
    Catalogo *catalogo = new Catalogo();

    ifstream archivoCategorias("categorias.txt", std::ifstream::in); // Por default abriendo como texto
    

    if (!archivoCategorias.is_open())
    {
        std::cerr << "Error abriendo archivo categorias.txt" << std::endl;
        return -1;
    }

    archivoCategorias >> catalogo;

    cout << "Mi catálogo: " << catalogo;

    archivoCategorias.close();

    delete catalogo;
}
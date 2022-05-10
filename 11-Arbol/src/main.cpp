#include "arbol.h"

int main() {

    Arbol *arbol = new Arbol(1, 2);

    arbol->InsertarValor(2, 7, 1);
    arbol->InsertarValor(3, 5, 1);
    arbol->InsertarValor(4, 2, 2);
    arbol->InsertarValor(5, 6, 2);
    arbol->InsertarValor(6, 9, 3);
    arbol->InsertarValor(7, 5, 5);
    arbol->InsertarValor(8, 11, 5);
    arbol->InsertarValor(9, 4, 6);

    delete arbol;

    return 0;
}
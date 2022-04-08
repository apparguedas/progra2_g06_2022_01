
#include "lista.h"


int main() {

    Lista *lista = new Lista();
    
    lista->AgregarValor(4);
    lista->AgregarValor(5);
    lista->AgregarValor(6);
    lista->AgregarValor(7);

    delete lista;

    return 0;
}
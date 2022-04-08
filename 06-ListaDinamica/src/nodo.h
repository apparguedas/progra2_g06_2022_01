#ifndef NODO_H
#define NODO_H

class Nodo {

    int valor;
    Nodo *siguiente;

    public:
    Nodo(int valorNuevo);
    ~Nodo();
    
    void AsignarPunteroSiguiente(Nodo *punteroAlNodo);
    Nodo *ObtenerPunteroSiguiente();

};

#endif
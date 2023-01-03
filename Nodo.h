//
// Created by wtla2 on 12/21/2021.
//

#ifndef LISTA_SIMPLE_TEMPLATES_NODO_H
#define LISTA_SIMPLE_TEMPLATES_NODO_H

#include <iostream>
#include <sstream>
using namespace std;

template<class tipo>
class Nodo {
private:
    tipo *datos;
    Nodo *siguiente;
public:
    Nodo();

    tipo *getDatos() const;

    void setDatos(tipo *datos);

    Nodo *getSiguiente() const;

    void setSiguiente(Nodo *siguiente);
};




#endif //LISTA_SIMPLE_TEMPLATES_NODO_H

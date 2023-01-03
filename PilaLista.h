//
// Created by wtla2 on 12/21/2021.
//

#ifndef LISTA_SIMPLE_TEMPLATES_PILALISTA_H
#define LISTA_SIMPLE_TEMPLATES_PILALISTA_H

#include "Lista.cpp"
#include "RuntimeException.h"

template<class tipo>
class PilaLista {//pila montada encima de una lista
private:
    Lista<tipo> *S;
    int n;
public:
    PilaLista();
    ~PilaLista();
    int size();
    bool empty() const;
    tipo *top() throw(StackEmpty);
    void push(tipo *e);
    void pop() throw(StackEmpty);
};



#endif //LISTA_SIMPLE_TEMPLATES_PILALISTA_H

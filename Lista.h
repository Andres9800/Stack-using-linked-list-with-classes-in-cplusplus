//
// Created by wtla2 on 12/21/2021.
//

#ifndef LISTA_SIMPLE_TEMPLATES_LISTA_H
#define LISTA_SIMPLE_TEMPLATES_LISTA_H

#include "Nodo.cpp"//no el .h

template<class tipo>
class Lista {
private:
    Nodo<tipo>* raiz;
public:
    Lista();

    virtual ~Lista();

    string toString();
    tipo* inicio();
    void borraInicio();
   // void agregarFinal(tipo* );
    void agregarInicio(tipo*);
    //bool borrar(tipo* , string& );
};



#endif //LISTA_SIMPLE_TEMPLATES_LISTA_H

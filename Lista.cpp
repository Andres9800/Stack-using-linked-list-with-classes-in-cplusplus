//
// Created by wtla2 on 12/21/2021.
//

#include "Lista.h"

template<class tipo>
Lista<tipo>::Lista() {
    raiz = new Nodo<tipo>;
}

template<class tipo>
Lista<tipo>::~Lista() {
    Nodo<tipo> *temp;
    Nodo<tipo> *anterior;
    if (raiz->getSiguiente()== nullptr){
        delete raiz;
    }else{
        while (raiz->getSiguiente()!= nullptr){
            temp=raiz;
            while (temp->getSiguiente()!= nullptr){
                anterior = temp;
                temp = temp->getSiguiente();
            }
            anterior->setSiguiente(nullptr);
            delete temp;
        }
    }
    cout<<"Lista Borrada! "<<endl;
}


template<class tipo>
string Lista<tipo>::toString() {
    stringstream ss;
    Nodo<tipo> *temporal = raiz;
    if (temporal->getSiguiente() == nullptr){
        ss<< "Lista vacia!!"<<endl;
    }else{
        temporal = temporal->getSiguiente();
        do {
            ss<<temporal->getDatos()->toString();
            ss<<"-->";
            temporal = temporal->getSiguiente();
        } while (temporal!= nullptr);
        ss<<"NULL"<<endl;
    }

    return ss.str();
}
/*template<class tipo>
void Lista<tipo>::agregarFinal(tipo *p) {
    Nodo<tipo> *nuevo = new Nodo<tipo>;
    nuevo->setMiPersona(p);
    nuevo->setSiguiente(nullptr);
    Nodo<tipo> *temp = raiz;
    if (temp == nullptr){
        raiz->setSiguiente(nuevo);
    }else{
        while(temp->getSiguiente() != nullptr){
            temp = temp->getSiguiente();
        }
        temp->setSiguiente(nuevo);
    }
}*/


template<class tipo>
tipo *Lista<tipo>::inicio() {
    Nodo<tipo> *temp = raiz;
    if (temp->getSiguiente()!= nullptr){
        temp = temp->getSiguiente();
        return temp->getDatos();
    }
    return nullptr;
}

template<class tipo>
void Lista<tipo>::borraInicio() {
    Nodo<tipo> *temp = raiz;
    if (temp->getSiguiente() != nullptr){
        temp = temp->getSiguiente();
        raiz->setSiguiente(temp->getSiguiente());
        delete temp;
    }
}

template<class tipo>
void Lista<tipo>::agregarInicio(tipo *p) {
    Nodo<tipo> *nuevo = new Nodo<tipo>;
    nuevo->setDatos(p);
    nuevo->setSiguiente(raiz->getSiguiente());
    raiz->setSiguiente(nuevo);
}

/*
template<class tipo>
bool Lista<tipo>::borrar(tipo *p, string &mensaje) {
    Nodo<tipo> * temp = raiz;
    Nodo<tipo> *anterior;

    if (temp->getSiguiente() == nullptr){
        return false;
    }
    if (temp->getDatos() == p){
        raiz->setSiguiente(temp->getSiguiente());
        delete temp;
        mensaje = "Borrado con exito \n";
        return true;
    }else{
        while(temp!= nullptr){
            anterior = temp;
            temp = temp->getSiguiente();
            if (temp == nullptr){
                mensaje = "Informacion no encontrada \n";
                return false;
            }
            if (temp->getDatos()==p){
                anterior->setSiguiente(temp->getSiguiente());
                delete temp;
                mensaje = "Borrado con exito \n";
                return true;
            }
        }
    }
}
*/


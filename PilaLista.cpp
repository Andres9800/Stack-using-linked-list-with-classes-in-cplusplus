

#include "PilaLista.h"
template<class tipo>
PilaLista<tipo>::PilaLista(): S(new Lista<tipo>), n(0) {
    //S = new Lista<tipo>;
}

template<class tipo>
PilaLista<tipo>::~PilaLista() {
    delete S;
}

template<class tipo>
int PilaLista<tipo>::size() {
    return n;
}

template<class tipo>
bool PilaLista<tipo>::empty() const {
    return n == 0;
}

template<class tipo>
void PilaLista<tipo>::push(tipo *e) {
    ++n;
    S->agregarInicio(e);
}

template<class tipo>
tipo *PilaLista<tipo>::top() throw(StackEmpty) {
    if (empty()){
        throw StackEmpty("Top sobre un stack vacio!");
    }
    return S->inicio();
}
template<class tipo>
void PilaLista<tipo>::pop() throw(StackEmpty) {
    if (empty()){
        throw StackEmpty("Top sobre un stack vacio!");
    }
    n--;
    return S->borraInicio();

}
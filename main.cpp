#include "PilaLista.cpp"

int main() {
    try {
        PilaLista<int> *l = new PilaLista<int>;
        l->push(new int(10));
        cout<< l->size()<<endl;
        cout<< *l->top()<<endl;
        l->push(new int (14));
        cout<< l->size()<<endl;
        cout<< *l->top()<<endl;
        l->pop();
        cout<< l->size()<<endl;
        cout<< *l->top()<<endl;
        l->pop();
        cout<< l->size()<<endl;
       // cout<< *l->top()<<endl;
        delete l;
    } catch (RuntimeException e) {
        {
            cout<< "Error: "<<e.getMessage()<<'\n';
        }
    }



    return 0;
}

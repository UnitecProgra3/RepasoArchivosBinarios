#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include <iostream>
using namespace std;
#include "NodoDoble.h"


class ListaDoble
{
    public:
        NodoDoble*inicio;
        ListaDoble();
        virtual ~ListaDoble();

        void imprimir();
        void agregarNodo(NodoDoble*nodo);
        void borrarUltimo();
        void agregarNodo(NodoDoble*nodo,int pos);
        void borrarNodo(int pos);
    protected:
    private:
};

#endif // LISTADOBLE_H

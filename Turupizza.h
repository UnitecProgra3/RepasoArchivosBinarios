#ifndef TURUPIZZA_H
#define TURUPIZZA_H

#include <list>
#include <string>
#include <fstream>
#include <iostream>
#include "Pizza.h"

using namespace std;

class Turupizza
{
    public:
        list<Pizza*>pizzas;

        void leer();
        void escribir();
        void imprimir();
        int getCantidad(string nombre);
        void setCantidad(string nombre,int cantidad);
        Turupizza();
        virtual ~Turupizza();
    protected:
    private:
};

#endif // TURUPIZZA_H

#ifndef PIZZA_H
#define PIZZA_H

#include <string>
using namespace std;

class Pizza
{
public:
    string nombre;
    int cantidad;
    Pizza(string nombre,int cantidad)
    {
        this->nombre=nombre;
        this->cantidad=cantidad;
    }
};

#endif // PIZZA_H

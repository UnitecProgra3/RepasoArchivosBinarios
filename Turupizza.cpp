#include "Turupizza.h"

Turupizza::Turupizza()
{
    //ctor
}

Turupizza::~Turupizza()
{
    //dtor
}

void Turupizza::leer()
{
    ifstream i("turupizza",ios::binary);

    pizzas.clear();

    i.seekg(0,ios::end);
    int tam=i.tellg();
    i.seekg(0);

    while(i.tellg()<tam)
    {
        char *nombre_leido=new char[20];
        int *cantidad_leida=new int(0);
        i.read(nombre_leido,20);
        i.read((char*)cantidad_leida,4);
//        cout<<nombre_leido<<endl;
//        cout<<*cantidad_leida<<endl;

        string nombre = nombre_leido;
        int cantidad = *cantidad_leida;
        pizzas.push_back(new Pizza(nombre,cantidad));
    }
//    i.close();
}

void Turupizza::escribir()
{
    ofstream o("turupizza",ios::binary);

    for(list<Pizza*>::iterator i=pizzas.begin();
        i!=pizzas.end();
        i++)
    {
        const char* nombre = (*i)->nombre.c_str();
        int* cantidad = new int ((*i)->cantidad);
        o.write(nombre,20);
        o.write((char*)cantidad,4);
    }

    o.close();
}

void Turupizza::imprimir()
{
    for(list<Pizza*>::iterator i=pizzas.begin();
        i!=pizzas.end();
        i++)
    {
        cout<<(*i)->nombre<<endl;
        cout<<(*i)->cantidad<<endl;
    }

}

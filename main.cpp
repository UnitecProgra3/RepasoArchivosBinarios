#include <iostream>
#include <list>
#include <fstream>
#include "Pizza.h"
#include "Turupizza.h"
using namespace std;

//class A
//{
//public:
//    int x;
//    int y;
//    A(int x,int y)
//    {
//        this->x=x;
//        this->y=y;
//    }
//};

int main()
{
    Turupizza t;
    t.pizzas.push_back(new Pizza("Margarita",2));
    t.pizzas.push_back(new Pizza("Napolitana",4));
    t.escribir();
    t.leer();
    t.imprimir();



//    map<string,int>agenda;
//    int opcion=0;
//    do
//    {
//        cout<<"Ingrese 1 para ingresar un numero, 2 para leer 3 para imprimir todos: ";
//        cin>>opcion;
//
//        if(opcion==1)
//        {
//            string nombre;
//            int num;
//            cout<<"Ingrese un nombre: ";
//            cin>>nombre;
//            cout<<"Ingrese un numero: ";
//            cin>>num;
//            agenda[nombre]=num;
//        }
//
//        if(opcion==2)
//        {
//            string nombre;
//            cout<<"Ingrese un nombre: ";
//            cin>>nombre;
//            cout<<agenda[nombre]<<endl;
//        }
//
//        if(opcion==3)
//        {
//            map<string,int>::iterator i;
//            for(i=agenda.begin();
//                i!=agenda.end();
//                i++)
//                cout<<i->first<<": "<<i->second<<endl;
//        }
//    }while(opcion==1 || opcion==2 || opcion==3);


//    ofstream o("archivo",ios::binary);
//    char str[10];
//    cin>>str;
//    o.write(str,10);
//    o.close();
//
//    ifstream i("archivo",ios::binary);
//    char str2[10];
//    i.read(str2,10);
//    cout<<"lei: "<<str2;


//    string str="123456";
//    cout<<str.length();
//    ofstream o("archivo",ios::binary);
//
//    for(int i=0;i<4;i++)
//    {
//        int num;
//        cout<<"Ingrese un numero: ";
//        cin>>num;
//        char c;
//        cout<<"Ingrese un char: ";
//        cin>>c;
//        o.write((char*)&num,sizeof(int));
//        o.write(&c,sizeof(char));
//    }
//    o.close();
//
//    ifstream i("archivo",ios::binary);
//
//    i.seekg(0,ios::end);
//    int tam = i.tellg();
//    i.seekg(0,ios::beg);
//
//    for(int j=0;i.tellg()<tam;j++)
//    {
//        int y;
//        char c;
//
//        i.read((char*)&y,sizeof(int));
//        i.read(&c,sizeof(char));
//
//        cout<<i.tellg()<<":"<<y<<","<<c<<endl;
//    }
}

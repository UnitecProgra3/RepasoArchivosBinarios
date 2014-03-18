#include "ListaDoble.h"

ListaDoble::ListaDoble()
{
    this->inicio=NULL;
}

ListaDoble::~ListaDoble()
{
    //dtor
}

void ListaDoble::imprimir()
{
    for(NodoDoble*temp=inicio;
        temp!=NULL;
        temp=temp->sig)
        cout<<temp->num<<endl;
}

void ListaDoble::agregarNodo(NodoDoble*n)
{
    if(inicio==NULL)
    {
        inicio=n;
    }else
    {
        NodoDoble*temp;
        for(temp=inicio;
            temp->sig!=NULL;
            temp=temp->sig);
        temp->sig=n;
        n->ant=temp;
    }
}

void ListaDoble::borrarUltimo()
{
    NodoDoble*temp;
    for(temp=inicio;
        temp->sig->sig!=NULL;
        temp=temp->sig)
    {
    }
    delete temp->sig;
    temp->sig=NULL;
}

void ListaDoble::agregarNodo(NodoDoble*nodo,int pos)
{
    NodoDoble*temp=inicio;
    for(int i=0; i<pos-1; i++)
    {
        temp=temp->sig;
        if(temp==NULL)
            return;
    }
    temp->sig->ant=nodo;
    nodo->sig=temp->sig;
    nodo->ant=temp;
    temp->sig=nodo;
}

void ListaDoble::borrarNodo(int pos)
{
    if(inicio==NULL || pos<0)
        return;

    if(pos==0)
    {
        NodoDoble*temp2=inicio->sig;
        delete inicio;
        inicio=temp2;
        inicio->ant=NULL;
    }else
    {
        NodoDoble*temp=inicio;
        for(int i=0;i<pos;i++)
        {
            temp=temp->sig;
            if(temp==NULL)
            {
                return;
            }
        }
        if(temp->sig!=NULL)
            temp->sig->ant=temp->ant;
        temp->ant->sig=temp->sig;
        delete temp;
    }
}










#include "pila_estatica.h"

pila_estatica::pila_estatica()
{
     tope = -1;
    //ctor
}

pila_estatica::~pila_estatica()
{
    //dtor
}


bool pila_estatica::estaLlena(){
    if( tope == MAX -1)
        return true;
    return false;
}

bool pila_estatica::estaVacia (){
    if ( tope < 0)
        return true;
    return false;
}

void pila_estatica::push( TipoDato x){
    tope ++;
    elementos[tope] = x;
}

TipoDato pila_estatica::pop(){
    TipoDato x;
    x = elementos[tope];
    tope --;
    return x;
}
TipoDato pila_estatica::consultaTope(){
    return elementos[tope];
}

void pila_estatica::mostrar (){
    int i;
    for(i = tope; i >= 0; i--)
        std::cout<<elementos[i]<<endl;
}

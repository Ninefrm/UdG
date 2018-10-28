#ifndef _COLA_H_
#define _COLA_H_

#include <iostream>

template <class I>
class Cola{
  public:
    Cola();
    void insertar(I value);
    void suprimir(int I);
    void mostrar();
    void primero();
    void ultimo();
    bool estaVacia();
    bool estaLlena();
  private:
    I Carry[10];
    int ultimo;
};

#endif

#ifndef _LISTA_H_
#define _LISTA_H_

#include <string>
#include "Usuario.h"

class Lista:public Usuario{
private:
    Usuario elementos[3];
    int ultimo;
public:
    Lista();
    void insertar(int);
    void suprimir(int);
    void mostrar();
    int localizar(std::string s);
    void primero();
    void ultim0();
    int anterior(int);
    int siguiente(int);
    bool estaVacia();
    bool estaLlena();
    Usuario Llenar();
    void Imprimir(Usuario A);
    void Rellenar();
    int ult();

};

#endif // LISTA_H_INCLUDED

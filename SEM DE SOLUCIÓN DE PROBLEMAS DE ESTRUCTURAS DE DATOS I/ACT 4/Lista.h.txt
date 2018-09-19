#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

class Lista{
private:
    int elementos[10], ultimo;

public:
    Lista();
    void insertar(int, int);
    void suprimir(int);
    void mostrar();
    int localizar(int);
    int primero();
    int ultim0();
    int anterior(int);
    int siguiente(int);
    bool estaVacia();
    bool estaLlena();

};

#endif // LISTA_H_INCLUDED

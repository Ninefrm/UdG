#ifndef PILA_ESTATICA_H
#define PILA_ESTATICA_H

#define MAX 10

#define TipoDato char

class pila_estatica{

    protected:
        TipoDato elementos[MAX];
        int tope;
      public:
        pila_estatica();
        virtual ~pila_estatica();
        bool estaLlena();
        bool estaVacia ();
        void push( TipoDato x);
        TipoDato pop();
        TipoDato consultaTope();
        void mostrar ();

};

#endif // PILA_ESTATICA_H

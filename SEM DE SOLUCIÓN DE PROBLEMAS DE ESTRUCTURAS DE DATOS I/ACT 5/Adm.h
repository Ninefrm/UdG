#ifndef _ADM_H_
#define _ADM_H_

#include "Usuario.h"
#include <iostream>

class Adm:public Usuario{
  private:
    Usuario Adm;
  public:
    Adm();
    void Capturar();
    void Eliminar();
    void Modificar();
    void Buscar();
    //void Ordenar();
    void Congresos();
    void InsCongresos();
    void InscArticulos();
    void Users();

}

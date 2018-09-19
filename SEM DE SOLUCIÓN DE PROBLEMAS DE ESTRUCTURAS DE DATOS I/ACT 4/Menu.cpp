#include "Menu.h"
#include "Lista.h"
#include "Usuario.h"
#include <iostream>
#include <string>

Menu::Menu(){
  int X=1;
  Lista A;
  while(X){
    std::cout<<"Quedan: "<<299-A.ult()<<" espacios."<<std::endl;
    int i, OP;
    std::string s;
    std::cout<<"1.- Rellenar."<<std::endl;
    std::cout<<"2.- Insertar."<<std::endl;
    std::cout<<"3.- Suprimir."<<std::endl;
    std::cout<<"4.- Mostrar."<<std::endl;
    std::cout<<"5.- Lozalizar."<<std::endl;
    std::cout<<"6.- Primero."<<std::endl;
    std::cout<<"7.- Ultimo."<<std::endl;
    std::cout<<"8.- ¿Esta Vacia?."<<std::endl;
    std::cout<<"9.- ¿Esta llena?."<<std::endl;
    std::cout<<"10.- Salir."<<std::endl;
    std::cin>>OP;
    std::cin.ignore();
    switch (OP) {
      case 1:
      A.Rellenar();
      break;
      case 2:
      std::cout<<"En que espacio insertarás el usuario: ";
      std::cin>>i;
      std::cin.ignore();
      A.insertar(i);
      break;
      case 3:
      std::cin>>i;
      std::cin.ignore();
      A.suprimir(i);
      break;
      case 4:
      A.mostrar();
      break;
      case 5:
      getline(std::cin, s);
      std::cout<<"Se ubica en el espacio: "<<A.localizar(s)<<std::endl;
      break;
      case 6:
      A.primero();
      break;
      case 7:
      A.ultim0();
      break;
      case 8:

      if(A.estaVacia()){
        std::cout<<"Esta vacia"<<std::endl;
      }
      else{std::cout<<"No esta vacia"<<std::endl;
      }
      break;
      case 9:
      if(A.estaLlena()){
        std::cout<<"Esta llena"<<std::endl;
      }
      else{std::cout<<"No esta llena"<<std::endl;
      }
      break;
      case 10:
      X=0;
      break;

    }
  }
}

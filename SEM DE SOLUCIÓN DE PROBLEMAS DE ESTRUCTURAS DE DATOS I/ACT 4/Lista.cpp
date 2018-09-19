#include "Lista.h"
#include "Usuario.h"
#include <iostream>

Lista::Lista() {
    ultimo = -1;
}

void Lista::insertar(int p) {
    if(p>300 || p<0) {
        std::cout << "Posicion invalida" << std::endl;
        return;
    }
    else {
        elementos[p]=Llenar();
        ultimo++;
    }
}

void Lista::suprimir(int p) {
    int i;
    for (i = p; i < ultimo; i++) {
        elementos[i] = elementos[i + 1];
        }
    ultimo--;
}

void Lista::mostrar() {
    for(int i  = 0; i <= ultimo; i++) {
        Imprimir(elementos[i]);
    }
}

int Lista::localizar(std::string s) {
    for(int i=0; i<=ultimo; i++) {
        if((elementos[i].n().compare(s))==0){
          std::cout<<s<<" "<<elementos[i].n()<<std::endl;
          return i;
        }
    }
    return -1;
}

void Lista::primero() {
    return Imprimir(elementos[0]);
}

void Lista::ultim0() {
  Imprimir(elementos[ultimo]);
}

/*int Lista::anterior(int e) {
  if(e!=0)
  return Imprimir(elementos[localizar(e)-1]);
}

int Lista::siguiente(int e) {
  if(e!=9) {
    return elementos[localizar(e)+1];
  }
}
*/

Usuario Lista::Llenar(){

  Usuario A;
  std::string Name, Career, Investigacion;
  int Edad;
  std::cout<<"Name:";
  getline(std::cin, Name);
  fflush(stdin);
  std::cout<<"Career: ";
  getline(std::cin, Career);
  fflush(stdin);
  std::cout<<"Investigation: ";
  getline(std::cin, Investigacion);
  fflush(stdin);
  std::cout<<"Edad: ";
  std::cin>>Edad;
  A.n(Name);
  A.c(Career);
  A.i(Investigacion);
  A.e(Edad);
  std::cin.ignore();
  return A;
}
void Lista::Imprimir(Usuario A){
  std::cout<<"NOMBRE: "<<A.n()<<" ";
  std::cout<<"CARRERA: "<<A.c()<<" ";
  std::cout<<"INVESTIGACION: "<<" ";
  std::cout<<"EDAD: "<<A.e()<<std::endl;
}
void Lista::Rellenar(){
  for(int i=0;i<300;i++){
    elementos[i]=Llenar();
    ultimo=ultimo+1;
  }
}
int Lista::ult(){
  return ultimo;
}
bool Lista::estaVacia(){
  if(ultimo==-1)return true;
  return false;
}
bool Lista::estaLlena(){
  if(ultimo==299)return true;
  return false;
}

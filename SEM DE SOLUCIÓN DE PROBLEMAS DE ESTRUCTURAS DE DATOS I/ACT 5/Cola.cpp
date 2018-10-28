#include "Cola.h"
Cola(){
  for(int i=0; i<10;i++)Carry[i]=0;
}
void insertar(I value){
  Carry[ultimo]=value;
}
void suprimir(int p){
  for (i = p; i < ultimo; i++) {
      Carry[i] = Carry[i + 1];
  }
  ultimo--;
}
void mostrar(){
  for(int i  = 0; i <= ultimo; i++) {
      Imprimir(Carry[i]);
  }
}
void primero(){
  return std::cout<<Carry[0];
}
void ultimo(){
  return std::cout<<Carry[ultimo];
}
bool estaVacia(){
  if(ultimo==-1)return true;
  return false;
}
bool estaLlena(){
  if(ultimo==10)return true;
  return false;
}

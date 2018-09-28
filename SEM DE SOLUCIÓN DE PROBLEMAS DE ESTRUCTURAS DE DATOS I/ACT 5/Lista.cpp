#include "Lista.h"
#include "Usuario.h"
#include <iostream>

Lista::Lista() {
    ultimo = -1;
}

void Lista::insertar(int p) {
    if(p>3 || p<0) {
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
        if((elementos[i].showname().compare(s))==0){
          std::cout<<s<<" "<<elementos[i].showname()<<std::endl;
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
  std::string Name, Email, Username;
  int D, M, Y,  Sexo;
  double Pass;
  std::cout<<"Name: ";
  getline(std::cin, Name);
  fflush(stdin);
  std::cout<<"Email: ";
  getline(std::cin, Email);
  fflush(stdin);
  std::cout<<"Username: ";
  getline(std::cin, Username);
  fflush(stdin);
  std::cout<<"Genero: (0.- Hombre, 1.- Mujer)";
  std::cin>>Sexo;
  fflush(stdin);
  std::cout<<"Fecha de nacimiento, Día: ";
  std::cin>>D;
  std::cout<<"Mes: ";
  std::cin>>M;
  std::cout<<"Año: ";
  std::cin>>Y;
  std::cout<<"Contraseña: ";
  std::cin>>Pass;
  A.addusername(Username);
  A.addpassword(Pass);
  A.addrol(1);
  A.addname(Name);
  A.addemail(Email);
  A.addgen(Sexo);
  A.addfecha(D,M,Y);
  std::cin.ignore();
  return A;
}
void Lista::Imprimir(Usuario A){
  std::cout<<"NOMBRE: "<<A.showname()<<std::endl;
  std::cout<<"EMAIL: "<<A.showemail()<<std::endl;
  if(A.showsexo() == 1){
    std::cout<<"GENERO: Femenino"<<std::endl;
  }
  else{
    std::cout<<"GENERO: Masculino"<<std::endl;
  }
  std::cout<<"FECHA DE NACIMIENTO: "<<showdia()<<"-"<<showmes()<<"-"<<showyear()<<std::endl;
  std::cout<<"USERNAME: "<<showusername()<<std::endl;
  if(sexo >= 1){
    std::cout<<"ROL: USER"<<std::endl;
    std::cout<<"CONTRASEÑA: "<<showpassword()<<"."<<std::endl;
  }
  else{
    std::cout<<"ROL: ADM"<<std::endl;
    std::cout<<"CONTRSEÑA: "<<showpassword()<<"."<<std::endl;
  }
  std::cout<<"/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*"<<std::endl;
}
void Lista::Rellenar(){
  Usuario A;
  for(int i=0;i<3;i++){
    elementos[i]=A;
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

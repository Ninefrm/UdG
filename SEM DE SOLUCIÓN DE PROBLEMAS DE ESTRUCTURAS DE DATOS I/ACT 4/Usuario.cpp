#include "Usuario.h"

Usuario::Usuario(){
  name="name";
  carrera="carrera";
  investigacion="investigacion";
  edad=0;
}
void Usuario::n(std::string n){
  name=n;
}
void Usuario::c(std::string c){
  carrera=c;
}
void Usuario::i(std::string i){
  investigacion=i;
}
void Usuario::e(int e){
  edad=e;
}
std::string Usuario::n(){
  return name;
}
std::string Usuario::c(){
  return carrera;
}
std::string Usuario::i(){
  return investigacion;
}
int Usuario::e(){
  return edad;
}

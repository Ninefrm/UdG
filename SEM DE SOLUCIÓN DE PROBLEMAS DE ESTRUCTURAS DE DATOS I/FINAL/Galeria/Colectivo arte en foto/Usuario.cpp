#include "pch.h"
#include "Usuario.h"
#include <iostream>

Usuario::Usuario() {
	name = "ADM";
	email = "ADM@gmail.com";
	sexo = 0;
	day = 0;
	month = 0;
	year = 0;
	username = "ADMINISTRADOR";
	password = 0;
	rol = 0;
}
void Usuario::addname(std::string N) {
	name = N;
}
void Usuario::addemail(std::string N) {
	email = N;
}
void Usuario::addsex(int A) {
	sexo = A;
}
void Usuario::addborn(int D, int M, int Y) {
	day = D;
	month = M;
	year = Y;
}
void Usuario::addusername(std::string N) {
	username = N;
}
void Usuario::addpassword(double A) {
	password = A;
}
void Usuario::addrol(int A) {
	rol = A;
}
std::string Usuario::showname() {
	return name;
}
std::string Usuario::showemail() {
	return email;
}
int Usuario::showsexo() {
	return sexo;
}
int Usuario::showdia() {
	return day;
}
int Usuario::showmes() {
	return month;
}
int Usuario::showyear() {
	return year;
}
std::string Usuario::showusername() {
	return username;
}
double Usuario::showpassword() {
	return password;
}
int Usuario::showrol() {
	return rol;
}
/*void Usuario::userinf(){
  std::cout<<"Nombre: "<<showname()<<", Email: "<<showemail()<<", ";
  if(sexo == 1){
	std::cout<<"Sexo: Femenino, ";
  }
  else{
	std::cout<<"Sexo: Masculino, ";
  }
  std::cout<<"Fecha de nacimiento: "<<showdia()<<"-"<<showmes()<<"-"<<showyear()<<", Username: "<<showusername();
  if(sexo >= 1){
	std::cout<<", "<<"ROL: USER, Contrase�a: "<<showpassword()<<"."<<std::endl;
  }
  else{
	std::cout<<", "<<"ROL: ADM, Contrase�a: "<<showpassword()<<"."<<std::endl;
  }
}
*/

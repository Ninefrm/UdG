#ifndef _USUARIO_H_
#define _USUARIO_H_

//Librerias

#include <string>

//
class Usuario{
  public:
    Usuario();
    void n(std::string n);
    void c(std::string c);
    void i(std::string i);
    void e(int e);
    std::string n();
    std::string c();
    std::string i();
    int e();
  private:
    std::string name;
    std::string carrera;
    std::string investigacion;
    int edad;
};

#endif

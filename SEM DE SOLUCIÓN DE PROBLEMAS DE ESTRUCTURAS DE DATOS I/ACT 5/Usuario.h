#ifndef _USUARIO_H_
#define _USUARIO_H_

//librerias
#include <string>

class Usuario{
  protected:
    std::string name;
    std::string email;
    int sexo;
    int dia, mes, year;
    std::string username;
    double password;
    int rol;

  public:
    Usuario();
    void addname(std::string);
    void addemail(std::string);
    void addgen(int);
    void addfecha(int,int,int);
    void addusername(std::string);
    void addpassword(double);
    void addrol(int);
    std::string showname();
    std::string showemail();
    int showsexo();
    int showdia();
    int showmes();
    int showyear();
    std::string showusername();
    double showpassword();
    int showrol();
    void userinf();
};

#endif

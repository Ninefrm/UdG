#pragma once
#include <string>
#include <vector>
#include <iostream>

class Usuario
{
private:
	std::string name;
	std::string email;
	int sexo;
	int day, month, year;
	std::string username;
	double password;
	int rol;
public:
	Usuario();
	void addname(std::string);
	void addemail(std::string);
	void addsex(int);
	void addborn(int, int, int);
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


#pragma once
#pragma once
#include <string>
#include <vector>
#include <iostream>

class User
{
private:
	std::string name;
	std::string lastname;
	std::string email;
	int sexo;
	int day, month, year;
	std::string username;
	double password;
	int rol;
public:
	User();
	void addName(std::string);
	void addLastName(std::string);
	void addEmail(std::string);
	void addSex(int);
	void addBorn(int, int, int);
	void addUsername(std::string);
	void addPassword(double);
	void addRol(int);
	std::string showName();
	std::string showLastName();
	std::string showEmail();
	int showSexo();
	int showDay();
	int showMonth();
	int showYear();
	std::string showUsername();
	double showPassword();
	int showRol();
	//void userInf();
};
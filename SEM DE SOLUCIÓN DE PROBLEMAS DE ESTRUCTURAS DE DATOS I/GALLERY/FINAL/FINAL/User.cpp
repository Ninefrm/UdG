#include "pch.h"

User::User()
{
	name = "ADM";
	lastname = "PASS";
	email = "ADM@gmail.com";
	sexo = 0;
	day = 0;
	month = 0;
	year = 0;
	username = "ADMINISTRADOR";
	password = 0;
	rol = 0;
}

void User::addName(std::string N)
{
	name = N;
}

void User::addLastName(std::string N)
{
	lastname = N;
}

void User::addEmail(std::string N)
{
	email = N;
}

void User::addSex(int A)
{
	sexo = A;
}

void User::addBorn(int D, int M, int Y)
{
	day = D;
	month = M;
	year = Y;
}

void User::addUsername(std::string N)
{
	username = N;
}

void User::addPassword(double A)
{
	password = A;
}

void User::addRol(int A)
{
	rol = A;
}

std::string User::showName()
{
	return name;
}

std::string User::showLastName()
{
	return lastname;
}

std::string User::showEmail()
{
	return email;
}

int User::showSexo()
{
	return sexo;
}

int User::showDay()
{
	return day;
}

int User::showMonth()
{
	return month;
}

int User::showYear()
{
	return year;
}

std::string User::showUsername()
{
	return username;
}

double User::showPassword()
{
	return password;
}

int User::showRol()
{
	return rol;
}

/*void User::userInf()
{
}
*/
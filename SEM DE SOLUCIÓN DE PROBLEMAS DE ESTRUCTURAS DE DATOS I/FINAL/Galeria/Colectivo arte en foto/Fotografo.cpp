#include "pch.h"
#include "Fotografo.h"


Fotografo::Fotografo():Usuario()
{
	Grade="Licenciatura";
	YXP=0;
	Phone=3334446969;
	Hometown="Guadalajara";
}

void Fotografo::addGrade(std::string N)
{
	Grade = N;
}

void Fotografo::addYXP(int N)
{
	YXP = N;
}

void Fotografo::addPhone(double long N)
{
	Phone = N;
}

void Fotografo::addHometown(std::string N)
{
	Hometown = N;
}

std::string Fotografo::showGrade()
{
	return Grade;
}

int Fotografo::showYXP()
{
	return YXP;
}

double long Fotografo::showPhone()
{
	return Phone;
}

std::string Fotografo::showHometown()
{
	return Hometown;
}

void Fotografo::addCollection(Obra N)
{
	Collection.push_back(N);
}

void Fotografo::showCollection()
{
	for (unsigned i = 0; i < Collection.size(); i++) {
		Collection.at(i).showTF();
	}
}

#pragma once
#include "Usuario.h"
#include "Obra.h"
class Fotografo :
	public Usuario
{
private:
	std::string Grade;
	int YXP;
	double long Phone;
	std::string Hometown;
	std::vector<Obra> Collection;
public:
	Fotografo();
	void addGrade(std::string);
	void addYXP(int);
	void addPhone(double long);
	void addHometown(std::string); 
	std::string showGrade();
	int showYXP();
	double long showPhone();
	std::string showHometown();
	void addCollection(Obra);
	void showCollection();
};


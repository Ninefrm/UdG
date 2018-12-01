#pragma once
#include "User.h"
#include "Artwork.h"
class Photographer :
	public User
{
private:
	std::string Grade;
	int YXP;
	double long Phone;
	std::string Hometown;
	int ID;
public:
	std::vector<Artwork> Collection;
	Photographer();
	void addGrade(std::string);
	void addYXP(int);
	void addPhone(double long);
	void addHometown(std::string);
	std::string showGrade();
	int showYXP();
	double long showPhone();
	std::string showHometown();
	void addCollection();
	void showCollection();
	void addID(int A);
	int showID();
	Photographer newPh();
	void showTF();
};
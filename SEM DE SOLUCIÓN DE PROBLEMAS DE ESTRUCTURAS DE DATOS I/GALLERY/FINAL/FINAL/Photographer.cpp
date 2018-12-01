#include "pch.h"
#include "Photographer.h"

Photographer::Photographer() :User()
{
	Grade = "Licenciatura";
	YXP = 0;
	Phone = 3334446969;
	Hometown = "Guadalajara";
	ID = 0;
}

void Photographer::addGrade(std::string N)
{
	Grade = N;
}

void Photographer::addYXP(int N)
{
	YXP = N;
}

void Photographer::addPhone(double long N)
{
	Phone = N;
}

void Photographer::addHometown(std::string N)
{
	Hometown = N;
}

std::string Photographer::showGrade()
{
	return Grade;
}

int Photographer::showYXP()
{
	return YXP;
}

double long Photographer::showPhone()
{
	return Phone;
}

std::string Photographer::showHometown()
{
	return Hometown;
}

void Photographer::addCollection()
{
	Artwork A;
	std::string N;
	int OP;
	std::cout << "Title: ";
	getline(std::cin, N);
	A.addTitle(N);

	std::cout << "Category. " << std::endl;
	std::cout << "0.-Portrait." << std::endl;
	std::cout << "1.-Landscape." << std::endl;
	std::cout << "2.-Urban photography." << std::endl;
	std::cout << "3.-Black&White." << std::endl;
	std::cout << "4.-Glamour." << std::endl;
	std::cin >> OP;
	A.addCategory(OP);

	std::cout << "Technique. " << std::endl;
	std::cout << "0.-Paper." << std::endl;
	std::cout << "1.-Wood." << std::endl;
	std::cout << "2.-Rock." << std::endl;
	std::cout << "3.-Textile." << std::endl;
	std::cin >> OP;
	A.addTechnique(OP);

	std::cout << "Camera Type. " << std::endl;
	std::cout << "0.-Compact." << std::endl;
	std::cout << "1.-APS." << std::endl;
	std::cout << "2.-SLR." << std::endl;
	std::cout << "3.-Digital." << std::endl;
	std::cin >> OP;
	A.addCameraType(OP);

	std::cout << "Len Type. " << std::endl;
	std::cout << "0.-Standard." << std::endl;
	std::cout << "1.-Wide Angle." << std::endl;
	std::cout << "2.-Telephoto." << std::endl;
	std::cout << "3.-Polyvalent." << std::endl;
	std::cout << "4.-Macro." << std::endl;
	std::cout << "5.-Fish eye." << std::endl;
	std::cin >> OP;
	A.addLensType(OP);

	std::cout << "Diaphragm. " << std::endl;
	std::cout << "0.-f/2." << std::endl;
	std::cout << "1.-f/2.8." << std::endl;
	std::cout << "2.-f/4." << std::endl;
	std::cout << "3.-f/5.6." << std::endl;
	std::cout << "4.-f/8." << std::endl;
	std::cout << "5.-f/11." << std::endl;
	std::cout << "6.-f/16." << std::endl;
	std::cout << "7.-f/22." << std::endl;
	std::cin >> OP;
	A.addDiaphragm(OP);

	std::cout << "Shutter speed. " << std::endl;
	std::cout << "0.-1/1000." << std::endl;
	std::cout << "1.-1/500." << std::endl;
	std::cout << "2.-1/250." << std::endl;
	std::cout << "3.-1/125." << std::endl;
	std::cout << "4.-1/60." << std::endl;
	std::cout << "5.-1/30." << std::endl;
	std::cout << "6.-1/15." << std::endl;
	std::cout << "7.-1/8." << std::endl;
	std::cin >> OP;
	A.addShutterSpeed(OP);
	std::cin.ignore();

	std::cout << "Location: ";
	getline(std::cin, N);
	A.addLocation(N);
	std::cout << "Model Name: ";
	getline(std::cin, N);
	A.addModelName(N);
	std::cout << "Price: $";
	std::cin >> OP;
	A.addPrice(OP);
	Collection.push_back(A);
	std::cout << "____________________________" << std::endl;
}

void Photographer::showCollection()
{
	for (unsigned i = 0; i < Collection.size(); i++) {
		Collection.at(i).showTF();
	}
}

void Photographer::addID(int A)
{
	ID = A;
}

int Photographer::showID()
{
	return ID;
}

/*Photographer Photographer::newPh()
{
	Photographer Example;
	std::string N, E, Instagram, Hometown;
	int A, D, M, Y;
	double long Number;
	std::cout << "Name: ";
	getline(std::cin, N);
		//std::cin.ignore();
	addName(N);
	std::cout << "Email: ";
	getline(std::cin, E);
		//std::cin.ignore();
	addEmail(E);
	std::cout << "Gender: ";
	std::cin >> A;
		std::cin.ignore();
	addSex(A);
	std::cout << "Birthday (Separate with a Enter): " <<std::endl;
	std::cin >> D;
	std::cin >> M;
	std::cin >> Y;
		std::cin.ignore();
	addBorn(D, M, Y);
	std::cout << "Instagram(Username): @";
	getline(std::cin, Instagram);
		//std::cin.ignore();
	addUsername(Instagram);
	std::cout << "Grade: ";
	getline(std::cin, N);
		//std::cin.ignore();
	addGrade(N);
	std::cout << "Years of experience: ";
	
		std::cin.ignore();
	addYXP(A);
	std::cout << "Phone number: ";
	std::cin >> Number;
		std::cin.ignore();
	addPhone(Number);
	std::cout << "Hometown: ";
	getline(std::cin, Hometown);
	addHometown(Hometown);
	return Example;
}
*/
void Photographer::showTF()
{
	std::cout << "Name: ";
	std::cout << showName();
	std::cout << std::endl << "LastName: ";
	std::cout << showLastName();
	std::cout << std::endl << "Email: ";
	std::cout << showEmail();
	std::cout << std::endl << "Gender: ";
	std::cout << showSexo();
	std::cout << std::endl << "Birthday: " << showDay() << "/" << showMonth() << "/" <<showYear();
	std::cout << std::endl << "Instagram: @";
	std::cout << showUsername();
	std::cout << std::endl << "Grade: ";
	std::cout << showGrade();
	std::cout << std::endl << "Years of experience: ";
	std::cout << showYXP();
	std::cout << std::endl << "Phone number: ";
	std::cout << showPhone();
	std::cout << std::endl << "Hometown: ";
	std::cout << showHometown() << std::endl;
	std::cout << "____________________________" << std::endl;
}

#include "pch.h"
#include "Gallery.h"

Gallery::Gallery()
{
	Password = 101;
}

void Gallery::addExpositor()
{
	Photographer Example;
	std::string N, E, Instagram, Hometown, LN;
	int A, D, M, Y;
	double long Number;
	std::cin.ignore();
	Example.addID(Expositors.size());
	std::cout << "Name: ";
	getline(std::cin, N);
	//
	Example.addName(N);
	std::cout << "Last Name: ";
	getline(std::cin, LN);
	//std::cin.ignore();
	Example.addLastName(LN);
	std::cout << "Email: ";
	getline(std::cin, E);
	//std::cin.ignore();
	Example.addEmail(E);
	std::cout << "Gender(0 MAN, 1 WOMAN): ";
	std::cin >> A;
	std::cin.ignore();
	Example.addSex(A);
	std::cout << "Birthday (Separate with a Enter): " << std::endl;
	std::cin >> D;
	std::cin >> M;
	std::cin >> Y;
	std::cin.ignore();
	Example.addBorn(D, M, Y);
	std::cout << "Instagram(Username): @";
	getline(std::cin, Instagram);
	//std::cin.ignore();
	Example.addUsername(Instagram);
	std::cout << "Grade: ";
	getline(std::cin, N);
	//std::cin.ignore();
	Example.addGrade(N);
	std::cout << "Years of experience: ";
	std::cin >> A;
	std::cin.ignore();
	Example.addYXP(A);
	std::cout << "Phone number: ";
	std::cin >> Number;
	std::cin.ignore();
	Example.addPhone(Number);
	std::cout << "Hometown: ";
	getline(std::cin, Hometown);
	Example.addHometown(Hometown);

	Expositors.push_back(Example);
	std::cout << "____________________________" << std::endl;
}

void Gallery::showExpositors()
{
	for (unsigned i = 0; i < Expositors.size(); i++) {
		Expositors.at(i).showTF();
	}
}

void Gallery::showExpositorsNames()
{
	unsigned x = 0, i = 0;
	int A = 65;
	int B = 97;
	while (i < 26) {
		x = 0;
		while (x < Expositors.size()) {
			if (Expositors.at(x).showName().front() == char(A + i) || Expositors.at(x).showName().front() == char(B + i)) {
				Expositors.at(x).showTF();
			}
			x++;
		}
		i++;
	}
}

void Gallery::showExpositorsLastName()
{
	int x = 0, i = 0;
	int A = 65;
	int B = 97;
	while (i < 26) {
		x = 0;
		while (x < Expositors.size()) {
			if (Expositors.at(x).showLastName().front() == char(A + i) || Expositors.at(x).showLastName().front() == char(B + i)) {
				Expositors.at(x).showTF();
			}
			x++;
		}
		i++;
	}
}

void Gallery::showExpositorsJName()
{
	for (unsigned i = 0; i < Expositors.size(); i++) {
		std::cout<<"Name:" << Expositors.at(i).showName();
		std::cout << " Last name:" << Expositors.at(i).showLastName();
		std::cout << "| ID:" << Expositors.at(i).showID();
		std::cout << "| WorkArts: " << Expositors.at(i).Collection.size()<< std::endl;
	}
}

void Gallery::addWorkArt()
{
	int Choose;
	showExpositorsJName();
	std::cout << "Choose an Expositors by ID: ";
	std::cin >> Choose;
	std::cin.ignore();
	Expositors.at(Choose).addCollection();
}

void Gallery::showWorkArt()
{
	int Choose;
	showExpositorsJName();
	std::cout << "Choose an Expositors by ID: ";
	std::cin >> Choose;
	std::cin.ignore();
	Expositors.at(Choose).showCollection();

}

void Gallery::showWorkArtCategory()
{
	int X=0, k=0;
	std::vector <int> WE;
	for (int i = 0; i < Expositors.size(); i++) {
		if (Expositors.at(i).Collection.size()) {
			WE.push_back(i);
		}
	}
	while (X < 5) {
		for (int j = 0; j < WE.size(); j++) {
			for (k = 0; k < Expositors.at(WE.at(j)).Collection.size(); k++) {
				if (Expositors.at(WE.at(j)).Collection.at(k).showCategory() == X) {
					std::cout << "Name:" << Expositors.at(WE.at(j)).showName();
					std::cout << " Last name:" << Expositors.at(WE.at(j)).showLastName();
					std::cout << "| ID:" << Expositors.at(WE.at(j)).showID();
					std::cout << "| WorkArts: " << Expositors.at(WE.at(j)).Collection.size() << std::endl;
					Expositors.at(WE.at(j)).Collection.at(k).showTF();
				}
			}
		}
		X++;
	}
}

void Gallery::showWorkArtAuthor()
{
	int X = 0, k = 0;
	for (int i = 0; i < Expositors.size(); i++) {
		if (Expositors.at(i).Collection.size()) {
			std::cout << "Name: " << Expositors.at(i).showName();
			std::cout << " Last name:" << Expositors.at(i).showLastName();
			std::cout << "| ID:" << Expositors.at(i).showID();
			std::cout << "| WorkArts: " << Expositors.at(i).Collection.size() << std::endl;
			Expositors.at(i).showCollection();
		}
	}
}

void Gallery::eraseAllExpositors()
{
	int Pass;
	std::cout << "Enter the password: ";
	std::cin >> Pass;
	if (Pass == Passw()) {
		Expositors.clear();
		std::cout << Expositors.size();
	}
	else {
		std::cout << "Wrong Password." << std::endl;
	}
}

void Gallery::eraseExpositor()
{
	std::string N, LN;
	int Pass;
	int x = 0;
	std::cin.ignore();
	std::cout << "Name: " << std::endl;
	getline(std::cin, N);
	std::cout << "Last name: " << std::endl;
	getline(std::cin, LN);
	while (x < Expositors.size()) {
		if (Expositors.at(x).showLastName() == LN && Expositors.at(x).showName() == N) {
			if (Expositors.at(x).Collection.size()) {
				std::cout << "The author has workarts, enter the password if you want to delete it: ";
				std::cin >> Pass;
				if (Pass == Passw()) {
					Expositors.erase(Expositors.begin()+x);
				}
				else {
					std::cout << "Wrong Password." << std::endl;
				}
			}
			else {
				Expositors.erase(Expositors.begin() + x);
			}
		}
		x++;
	}
}

void Gallery::eraseAllWorkArt()
{
	int Choose;
	showExpositorsJName();
	std::cout << "Choose an Expositors by ID: ";
	std::cin >> Choose;
	std::cin.ignore();
	if (Expositors.at(Choose).Collection.size()) {
		Expositors.at(Choose).Collection.clear();
	}
	else {
		std::cout << "He does not has WorkArts." <<std::endl;
	}
}

void Gallery::eraseWorkArtbyName()
{
	int Choose;
	std::string N;
	showExpositorsJName();
	std::cout << "Choose an Expositors by ID: ";
	std::cin >> Choose;
	std::cin.ignore();
	if (Expositors.at(Choose).Collection.size()) {
		Expositors.at(Choose).showCollection();
		std::cout << "WorkArt name: " << std::endl;
		getline(std::cin, N);
		for (int i = 0; i < Expositors.at(Choose).Collection.size(); i++) {
			if (Expositors.at(Choose).Collection.at(i).showTitle() == N) {
				Expositors.at(Choose).Collection.erase(Expositors.at(Choose).Collection.begin()+i);
			}
		}
	}
	else {
		std::cout << "He does not has WorkArts." << std::endl;
	}
}

void Gallery::EditWorkArt()
{
	int Choose, X=0;
	showWorkArtAuthor();
	std::string WA;
	std::cin.ignore();
	std::cout << "WorkArt name: " << std::endl;
	getline(std::cin, WA);
	while (X < Expositors.size()) {
		for (int i = 0; i < Expositors.at(X).Collection.size(); i++) {
			if (Expositors.at(X).Collection.at(i).showTitle() == WA) {
				//
				std::string N;
				int OPX;
				int OP = 0;
				std::cout << "Choose what you want to edit: " << std::endl;
				std::cout << "0.- Title. "<<std::endl;
				std::cout << "1.- Category.. " << std::endl;
				std::cout << "2.- Technique. " << std::endl;
				std::cout << "3.- Camera Type. " << std::endl;
				std::cout << "4.- Len Type. " << std::endl;
				std::cout << "5.- Diaphragm." << std::endl;
				std::cout << "6.- Shutter speed." << std::endl;
				std::cout << "7.- Location. " << std::endl;
				std::cout << "8.- Model Name. " << std::endl;
				std::cout << "9.- Price. " << std::endl;
				std::cin >> OPX;
				//
				double long Number;
				switch (OPX)
				{
				case 0:
					std::cin.ignore();
					std::cout << "Title: ";
					getline(std::cin, N);
					Expositors.at(X).Collection.at(i).addTitle(N);
					break;
				case 1:
					std::cin.ignore();
					std::cout << "Category. " << std::endl;
					std::cout << "0.-Portrait." << std::endl;
					std::cout << "1.-Landscape." << std::endl;
					std::cout << "2.-Urban photography." << std::endl;
					std::cout << "3.-Black&White." << std::endl;
					std::cout << "4.-Glamour." << std::endl;
					std::cin >> OP;
					Expositors.at(X).Collection.at(i).addCategory(OP);
					break;
				case 2:
					std::cin.ignore();
					std::cout << "Technique. " << std::endl;
					std::cout << "0.-Paper." << std::endl;
					std::cout << "1.-Wood." << std::endl;
					std::cout << "2.-Rock." << std::endl;
					std::cout << "3.-Textile." << std::endl;
					std::cin >> OP;
					Expositors.at(X).Collection.at(i).addTechnique(OP);
					break;
				case 3:
					std::cin.ignore();
					std::cout << "Camera Type. " << std::endl;
					std::cout << "0.-Compact." << std::endl;
					std::cout << "1.-APS." << std::endl;
					std::cout << "2.-SLR." << std::endl;
					std::cout << "3.-Digital." << std::endl;
					std::cin >> OP;
					Expositors.at(X).Collection.at(i).addCameraType(OP);
					break;
				case 4:
					std::cin.ignore();
					std::cout << "Len Type. " << std::endl;
					std::cout << "0.-Standard." << std::endl;
					std::cout << "1.-Wide Angle." << std::endl;
					std::cout << "2.-Telephoto." << std::endl;
					std::cout << "3.-Polyvalent." << std::endl;
					std::cout << "4.-Macro." << std::endl;
					std::cout << "5.-Fish eye." << std::endl;
					std::cin >> OP;
					Expositors.at(X).Collection.at(i).addLensType(OP);
					break;
				case 5:
					std::cin.ignore();
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
					Expositors.at(X).Collection.at(i).addDiaphragm(OP);
					break;
				case 6:
					std::cin.ignore();
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
					Expositors.at(X).Collection.at(i).addShutterSpeed(OP);
					break;
				case 7:
					std::cin.ignore();
					std::cout << "Location: ";
					getline(std::cin, N);
					Expositors.at(X).Collection.at(i).addLocation(N);
					break;
				case 8:
					std::cin.ignore();
					std::cout << "Model Name: ";
					getline(std::cin, N);
					Expositors.at(X).Collection.at(i).addModelName(N);
					break;
				case 9:
					std::cin.ignore();
					std::cout << "Price: $";
					std::cin >> OP;
					Expositors.at(X).Collection.at(i).addPrice(OP);
					break;
				}
			}
		}
	}
	
	
}

void Gallery::EditPhotographs()
{
	int Choose;
	showExpositorsJName();
	std::cout << "Choose an Expositors by ID: ";
	std::cin >> Choose;
	std::cin.ignore();
	//
	std::string N;
	int OP;
	std::cout << "Choose what you want to edit: " << std::endl;
	std::cout << "0.- Name."<<std::endl;
	std::cout << "1.- Last Name." << std::endl;
	std::cout << "2.- Email." << std::endl;
	std::cout << "3.- Gender. " << std::endl;
	std::cout << "4.- Birthday." << std::endl;
	std::cout << "5.- Instagram:" << std::endl;
	std::cout << "6.- Grade." << std::endl;
	std::cout << "7.- Years of experience." << std::endl;
	std::cout << "8.- Phone number." << std::endl;
	std::cout << "9.- Hometown."<< std::endl;
	std::cin >> OP;
	//
	std::string E, Instagram, Hometown, LN;
	int A, D, M, Y;
	double long Number;
	switch (OP)
	{
	case 0:
		std::cin.ignore();
		std::cout << "Name: ";
		getline(std::cin, N);
		//
		Expositors.at(Choose).addName(N);
		break;
	case 1:
		std::cin.ignore();
		std::cout << "Last Name: ";
		getline(std::cin, LN);
		//std::cin.ignore();
		Expositors.at(Choose).addLastName(LN);
		break;
	case 2:
		std::cin.ignore();
		std::cout << "Email: ";
		getline(std::cin, E);
		//std::cin.ignore();
		Expositors.at(Choose).addEmail(E);
		break;
	case 3:
		std::cin.ignore();
		std::cout << "Gender: ";
		std::cin >> A;
		std::cin.ignore();
		Expositors.at(Choose).addSex(A);
		break;
	case 4:
		std::cin.ignore();
		std::cout << "Birthday (Separate with a Enter): " << std::endl;
		std::cin >> D;
		std::cin >> M;
		std::cin >> Y;
		std::cin.ignore();
		Expositors.at(Choose).addBorn(D, M, Y);
		break;
	case 5:
		std::cin.ignore();
		std::cout << "Instagram(Username): @";
		getline(std::cin, Instagram);
		//std::cin.ignore();
		Expositors.at(Choose).addUsername(Instagram);
		break;
	case 6:
		std::cin.ignore();
		std::cout << "Grade: ";
		getline(std::cin, N);
		//std::cin.ignore();
		Expositors.at(Choose).addGrade(N);
		break;
	case 7:
		std::cin.ignore();
		std::cout << "Years of experience: ";
		std::cin >> A;
		std::cin.ignore();
		Expositors.at(Choose).addYXP(A);
		break;
	case 8:
		std::cin.ignore();
		std::cout << "Phone number: ";
		std::cin >> Number;
		std::cin.ignore();
		Expositors.at(Choose).addPhone(Number);
		break;
	case 9:
		std::cin.ignore();
		std::cout << "Hometown: ";
		getline(std::cin, Hometown);
		Expositors.at(Choose).addHometown(Hometown);
		break;
	}
}

void Gallery::Pass()
{
	std::cin.ignore();
	double B;
	std::cout << "Enter new password: ";
	std::cin >> B;
	Password = B;
	std::cin.ignore();
}

double Gallery::Passw()
{
	return Password;
}

void Gallery::searchExpositorsNameLastName()
{
	std::string N, LN;
	int x = 0;
	std::cin.ignore();
	std::cout << "Name: " << std::endl;
	getline(std::cin, N);
	std::cout << "Last name: " << std::endl;
	getline(std::cin, LN);
	while (x < Expositors.size()) {
		if (Expositors.at(x).showLastName() == LN && Expositors.at(x).showName() == N) {
				Expositors.at(x).showTF();
		}
		x++;
	}
}

void Gallery::searchWorkArtNameAuthor()
{
	std::string N, LN;
	int x = 0;
	std::cin.ignore();
	std::cout << "WorkArt name: " << std::endl;
	getline(std::cin, N);
	while (x < Expositors.size()) {
		for (int i = 0; i < Expositors.at(x).Collection.size(); i++) {
			if (Expositors.at(x).Collection.at(i).showTitle() == N) {
				Expositors.at(x).showTF();
			}
		}
		
		x++;
	}
}

void Gallery::searchWorkArtNameWorkArt()
{
	std::string N;
	int x = 0;
	std::cin.ignore();
	std::cout << "WorkArt name: " << std::endl;
	getline(std::cin, N);
	while (x < Expositors.size()) {
		for (int i = 0; i < Expositors.at(x).Collection.size(); i++) {
			if (Expositors.at(x).Collection.at(i).showTitle() == N) {
				Expositors.at(x).Collection.at(i).showTF();
			}
		}

		x++;
	}
}

void Gallery::searchWorkArtAuthor()
{
	std::string N, LN;
	int x = 0;
	std::cin.ignore();
	std::cout << "Name: " << std::endl;
	getline(std::cin, N);
	std::cout << "Last name: " << std::endl;
	getline(std::cin, LN);
	while (x < Expositors.size()) {
		if (Expositors.at(x).showLastName() == LN && Expositors.at(x).showName() == N) {
			for (int i = 0; i < Expositors.at(x).Collection.size(); i++) {
					Expositors.at(x).Collection.at(i).showTF();
			}
		}
		x++;
	}
}

#include "pch.h"
#include "Artwork.h"

Artwork::Artwork()
{
	Title = "Example";
	Category = 0;
	Technique = 0;
	CameraType = 0;
	LensType = 0;
	Diaphragm = 0;
	ShutterSpeed = 0;
	Location = "Example";
	ModelName = "Example";
	Price = 0;
}

std::string Artwork::showTitle()
{
	return Title;
}

int Artwork::showCategory()
{
	return Category;
}

int Artwork::showTechnique()
{
	return Technique;
}

int Artwork::showCameraType()
{
	return CameraType;
}

int Artwork::showLensType()
{
	return LensType;
}

int Artwork::showDiaphragm()
{
	return Diaphragm;
}

int Artwork::showShutterSpeed()
{
	return ShutterSpeed;
}

std::string Artwork::showLocation()
{
	return Location;
}

std::string Artwork::showModelName()
{
	return ModelName;
}

int Artwork::showPrice()
{
	return Price;
}

void Artwork::addTitle(std::string N)
{
	Title = N;
}

void Artwork::addCategory(int N)
{
	Category = N;
}

void Artwork::addTechnique(int N)
{
	Technique = N;
}

void Artwork::addCameraType(int N)
{
	CameraType = N;
}

void Artwork::addLensType(int N)
{
	LensType = N;
}

void Artwork::addDiaphragm(int N)
{
	Diaphragm = N;
}

void Artwork::addShutterSpeed(int N)
{
	ShutterSpeed = N;
}

void Artwork::addLocation(std::string N)
{
	Location = N;
}

void Artwork::addModelName(std::string N)
{
	ModelName = N;
}

void Artwork::addPrice(int N)
{
	Price = N;
}

void Artwork::showTF()
{
	//TITLE
	std::cout << "Title: " << showTitle() << std::endl;
	//CATEGORY
	std::cout << "Category: ";
	switch (showCategory())
	{
	case 0:
		std::cout << "Portrait." << std::endl;
		break;
	case 1:
		std::cout << "Landscape." << std::endl;
		break;
	case 2:
		std::cout << "Urban photography." << std::endl;
		break;
	case 3:
		std::cout << "Black&White." << std::endl;
		break;
	case 4:
		std::cout << "Glamour." << std::endl;
		break;
	}
	//TECHNIQUE
	std::cout << "Technique: ";
	switch (showTechnique())
	{
	case 0:
		std::cout << "Paper." << std::endl;
		break;
	case 1:
		std::cout << "Wood." << std::endl;
		break;
	case 2:
		std::cout << "Rock." << std::endl;
		break;
	case 3:
		std::cout << "Textile." << std::endl;
	}
	//CAMERA TYPE
	std::cout << "Camera Type: ";
	switch (showCameraType())
	{
	case 0:
		std::cout << "Compact." << std::endl;
		break;
	case 1:
		std::cout << "APS." << std::endl;
		break;
	case 2:
		std::cout << "SLR." << std::endl;
		break;
	case 3:
		std::cout << "Digital." << std::endl;
		break;
	}
	//LENS TYPE
	std::cout << "Lens Type: ";
	switch (showLensType())
	{
	case 0:
		std::cout << "Standard." << std::endl;
		break;
	case 1:
		std::cout << "Wide Angle." << std::endl;
		break;
	case 2:
		std::cout << "Telephoto." << std::endl;
		break;
	case 3:
		std::cout << "Polyvalent." << std::endl;
		break;
	case 4:
		std::cout << "Macro." << std::endl;
		break;
	case 5:
		std::cout << "Fish eye." << std::endl;
		break;
	}
	//DIAPHRAGM
	std::cout << "Diaphragm: ";
	switch (showDiaphragm())
	{
	case 0:
		std::cout << "f/2." << std::endl;
		break;
	case 1:
		std::cout << "f/2.8." << std::endl;
		break;
	case 2:
		std::cout << "f/4." << std::endl;
		break;
	case 3:
		std::cout << "f/5.6." << std::endl;
		break;
	case 4:
		std::cout << "f/8." << std::endl;
		break;
	case 5:
		std::cout << "f/11." << std::endl;
		break;
	case 6:
		std::cout << "f/16." << std::endl;
		break;
	case 7:
		std::cout << "f/22." << std::endl;
		break;
	}
	//SHUTTER SPEED
	std::cout << "Shutter speed: ";
	switch (showShutterSpeed())
	{
	case 0:
		std::cout << "1/1000." << std::endl;
		break;
	case 1:
		std::cout << "1/500." << std::endl;
		break;
	case 2:
		std::cout << "1/250." << std::endl;
		break;
	case 3:
		std::cout << "1/125." << std::endl;
		break;
	case 4:
		std::cout << "1/60." << std::endl;
		break;
	case 5:
		std::cout << "1/30." << std::endl;
		break;
	case 6:
		std::cout << "1/15." << std::endl;
		break;
	case 7:
		std::cout << "1/8." << std::endl;
		break;
	}
	//LOCATION
	std::cout << "Location: " << showLocation() << std::endl;
	std::cout << "Model Name: " << showModelName() << std::endl;
	std::cout << "Price: $" << showPrice() << std::endl;
}

Artwork Artwork::addTF()
{
	Artwork A;
	std::string N;
	int OP;
	std::cout << "Title: " << std::endl;
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
	return A;
}


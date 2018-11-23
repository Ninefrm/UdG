#include "pch.h"
#include "Obra.h"


Obra::Obra()
{
	Title="Example";
	Category = 0;
	Tectechnique = 0;
	CameraType = 0;
	LensType = 0;
	Diaphragm = 0;
	ShutterSpeed = 0;
	Location = "Example";
	ModelName = "Example";
	Price = 0;
}

std::string Obra::showTitle()
{
	return Title;
}

int Obra::showCategory()
{
	return Category;
}

int Obra::showTectechnique()
{
	return Tectechnique;
}

int Obra::showCameraType()
{
	return CameraType;
}

int Obra::showLensType()
{
	return LensType;
}

int Obra::showDiaphragm()
{
	return Diaphragm;
}

int Obra::showShutterSpeed()
{
	return ShutterSpeed;
}

std::string Obra::showLocation()
{
	return Location;
}

std::string Obra::showModelName()
{
	return ModelName;
}

int Obra::showPrice()
{
	return Price;
}

void Obra::addTitle(std::string N)
{
	Title = N;
}

void Obra::addCategory(int N)
{
	Category = N;
}

void Obra::addTectechnique(int N)
{
	Tectechnique = N;
}

void Obra::addCameraType(int N)
{
	CameraType = N;
}

void Obra::addLensType(int N)
{
	LensType = N;
}

void Obra::addDiaphragm(int N)
{
	Diaphragm = N;
}

void Obra::addShutterSpeed(int N)
{
	ShutterSpeed = N;
}

void Obra::addLocation(std::string N)
{
	Location = N;
}

void Obra::addModelName(std::string N)
{
	ModelName = N;
}

void Obra::addPrice(int N)
{
	Price = N;
}

void Obra::showTF()
{
	std::cout << showTitle() << std::endl;
	std::cout << showCategory() << std::endl;
	std::cout << showTectechnique() << std::endl;
	std::cout << showCameraType() << std::endl;
	std::cout << showLensType() << std::endl;
	std::cout << showDiaphragm() << std::endl;
	std::cout << showShutterSpeed() << std::endl;
	std::cout << showLocation() << std::endl;
	std::cout << showModelName() << std::endl;
	std::cout << showPrice() << std::endl;
}

void Obra::addTF()
{	
	std::string N;
	int OP;
	std::cout << "Title: " << std::endl;
	getline(std::cin, N);
	Title=N;

	std::cout << "Category. " << std::endl;
	std::cout << "0.-Portrait." << std::endl;
	std::cout << "1.-Landscape." << std::endl;
	std::cout << "2.-Urban photography." << std::endl;
	std::cout << "3.-Black&White." << std::endl;
	std::cout << "4.-Glamour." << std::endl;
	std::cin >> OP;
	Category=OP;

	std::cout << "Tectechnique. " << std::endl;
	std::cout << "0.-Paper." << std::endl;
	std::cout << "1.-Wood." << std::endl;
	std::cout << "2.-Rock." << std::endl;
	std::cout << "3.-Textile." << std::endl;
	std::cin >> OP;
	Tectechnique=OP;

	std::cout << "Camera Type. " << std::endl;
	std::cout << "0.-Compact." << std::endl;
	std::cout << "1.-APS." << std::endl;
	std::cout << "2.-SLR." << std::endl;
	std::cout << "3.-Digital." << std::endl;
	std::cin >> OP;
	CameraType=OP;

	std::cout << "Len Type. " << std::endl;
	std::cout << "0.-Standard." << std::endl;
	std::cout << "1.-Wide Angle." << std::endl;
	std::cout << "2.-Telephoto." << std::endl;
	std::cout << "3.-Polyvalent." << std::endl;
	std::cout << "4.-Macro." << std::endl;
	std::cout << "5.-Fish eye." << std::endl;
	std::cin >> OP;
	LensType=OP;

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
	Diaphragm=OP;

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
	ShutterSpeed=OP;
	std::cin.ignore();

	std::cout << "Location: ";
	getline(std::cin, N);
	Location=N;
	std::cin.ignore();
	std::cout << "Model Name: ";
	getline(std::cin, N);
	ModelName=N;
	std::cin.ignore();
	std::cout << "Price: $";
	std::cin >> OP;
	Price=OP;

}

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

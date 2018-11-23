#pragma once
#include <string>
#include <iostream>
class Obra
{
private:
	std::string Title;
	int Category;
	int Tectechnique;
	int CameraType;
	int LensType;
	int Diaphragm;
	int ShutterSpeed;
	std::string Location;
	std::string ModelName;
	int Price;
public:
	Obra();
	std::string showTitle();
	int showCategory();
	int showTectechnique();
	int showCameraType();
	int showLensType();
	int showDiaphragm();
	int showShutterSpeed();
	std::string showLocation();
	std::string showModelName();
	int showPrice();
	void addTitle(std::string);
	void addCategory(int);
	void addTectechnique(int);
	void addCameraType(int);
	void addLensType(int);
	void addDiaphragm(int);
	void addShutterSpeed(int);
	void addLocation(std::string);
	void addModelName(std::string);
	void addPrice(int);
	void showTF();
	void addTF();
};


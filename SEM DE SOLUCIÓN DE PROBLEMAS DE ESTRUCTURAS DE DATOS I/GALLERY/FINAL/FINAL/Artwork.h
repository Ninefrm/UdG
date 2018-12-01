#pragma once
#include "pch.h"
#include <string>
#include <iostream>

class Artwork
{
private:
	std::string Title;
	int Category;
	int Technique;
	int CameraType;
	int LensType;
	int Diaphragm;
	int ShutterSpeed;
	std::string Location;
	std::string ModelName;
	int Price;
public:
	Artwork();
	std::string showTitle();
	int showCategory();
	int showTechnique();
	int showCameraType();
	int showLensType();
	int showDiaphragm();
	int showShutterSpeed();
	std::string showLocation();
	std::string showModelName();
	int showPrice();
	void addTitle(std::string);
	void addCategory(int);
	void addTechnique(int);
	void addCameraType(int);
	void addLensType(int);
	void addDiaphragm(int);
	void addShutterSpeed(int);
	void addLocation(std::string);
	void addModelName(std::string);
	void addPrice(int);
	void showTF();
	Artwork addTF();
};
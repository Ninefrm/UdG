#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Photographer.h"

class Gallery
{
public:
	std::vector<Photographer> Expositors;
	Gallery();
	void addExpositor();
	void showExpositors();
	void showExpositorsNames();
	void showExpositorsLastName();
	void showExpositorsJName();
	void addWorkArt();
	void showWorkArt();
	void showWorkArtCategory();
	void showWorkArtAuthor();
	void searchExpositorsNameLastName();
	void searchWorkArtNameAuthor();
	void searchWorkArtNameWorkArt();
	void searchWorkArtAuthor();
	void eraseAllExpositors();
	void eraseExpositor();
	void eraseAllWorkArt();
	void eraseWorkArtbyName();
	void EditPhotographs();
	void EditWorkArt();
	void Pass();
	double Passw();

private:
	Photographer A;
	std::string GalleryName;
	double Password;
};

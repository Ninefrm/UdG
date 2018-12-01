#include "pch.h"
#include "Start.h"


Start::Start()
{
	int OP;
	int X = 1;
	while (X) {
		std::cout << "\t MAXIMILIANO FONSECA's GALLERY" << std::endl;
		std::cout << "1.- Add..." << std::endl;
		std::cout << "2.- Show..." << std::endl;
		std::cout << "3.- Search..." << std::endl;
		std::cout << "4.- Erase..." << std::endl;
		std::cout << "5.- Edit..." << std::endl;
		std::cout << "6.- Configuration..." << std::endl;
		std::cout << "7.- GalleryView." << std::endl;
		std::cout << "8.- Exit." << std::endl;
		std::cout << "CHOOSE AN OPTION:";
		std::cin >> OP;
		switch (OP)
		{
		default:
			std::cout << "Choose other option.";
			break;
		case 1:
			Add();
			break;
		case 2:
			Show();
			break;
		case 3:
			Search();
			break;
		case 4:
			Erase();
			break;
		case 5:
			Edit();
			break;
		case 6:
			Configuration();
			break;
		case 7:
			GalleryView();
			break;
		case 8:
			X = 0;
			break;
		}
	}
}

void Start::Add()
{
	int OP;
	std::cout << "\t MAXIMILIANO FONSECA's GALLERY" << std::endl;
	std::cout << "1.- Add Expositor" << std::endl;
	std::cout << "2.- Add WorkArt" << std::endl;
	std::cout << "CHOOSE AN OPTION:";
	std::cin >> OP;
	switch (OP)
	{
	default:
		std::cout << "Choose other option.";
		break;
	case 1:
		A.addExpositor();
		system("PAUSE");
		system("CLS");
		break;
	case 2:
		A.addWorkArt();
		system("PAUSE");
		system("CLS");
		break;
	}
}

void Start::Show()
{
	int OP;
	std::cout << "\t MAXIMILIANO FONSECA's GALLERY" << std::endl;
	std::cout << "1.- Show Expositors" << std::endl;
	std::cout << "2.- Show Expositors ordered by Name" << std::endl;
	std::cout << "3.- Show Expositors ordered by LastName" << std::endl;
	std::cout << "4.- Show Expositors just Name." << std::endl;
	std::cout << "5.- Show WorkArt of an Expositor." << std::endl;
	std::cout << "6.- Show WorkArt ordered by Category." << std::endl;
	std::cout << "7.- Show WorkArt ordered by Author." << std::endl;
	std::cout << "CHOOSE AN OPTION:";
	std::cin >> OP;
	switch (OP)
	{
	default:
		std::cout << "Choose other option.";
		break;
	case 1:
		A.showExpositors();
		system("PAUSE");
		system("CLS");
		break;
	case 2:
		A.showExpositorsNames();
		system("PAUSE");
		system("CLS");
		break;
	case 3:
		A.showExpositorsLastName();
		system("PAUSE");
		system("CLS");
		break;
	case 4:
		A.showExpositorsJName();
		system("PAUSE");
		system("CLS");
		break;
	case 5:
		A.showWorkArt();
		system("PAUSE");
		system("CLS");
		break;
	case 6:
		A.showWorkArtCategory();
		system("PAUSE");
		system("CLS");
		break;
	case 7:
		A.showWorkArtAuthor();
		system("PAUSE");
		system("CLS");
		break;
	}
}

void Start::Search()
{
	int OP;
	std::cout << "\t MAXIMILIANO FONSECA's GALLERY" << std::endl;
	std::cout << "1.- Search Expositors with name and last name." << std::endl;
	std::cout << "2.- Search WorkArt with Author name." << std::endl;
	std::cout << "3.- Search WorkArt with WorkArt name." << std::endl;
	std::cout << "4.- Search the WorkArt of an Author." << std::endl;
	std::cout << "CHOOSE AN OPTION:";
	std::cin >> OP;
	switch (OP)
	{
	default:
		std::cout << "Choose other option.";
		break;
	case 1:
		A.searchExpositorsNameLastName();
		system("PAUSE");
		system("CLS");
		break;
	case 2:
		A.searchWorkArtNameAuthor();
		system("PAUSE");
		system("CLS");
		break;
	case 3:
		A.searchWorkArtNameWorkArt();
		system("PAUSE");
		system("CLS");
		break;
	case 4:
		A.searchWorkArtAuthor();
		system("PAUSE");
		system("CLS");
		break;
	}
}

void Start::Erase()
{
	int OP;
	std::cout << "\t MAXIMILIANO FONSECA's GALLERY" << std::endl;
	std::cout << "1.- Erase all expositors." << std::endl;
	std::cout << "2.- Erase an expositor." << std::endl;
	std::cout << "3.- Erase all workarts." << std::endl;
	std::cout << "4.- Erase a workart with the name." << std::endl;
	std::cout << "CHOOSE AN OPTION:";
	std::cin >> OP;
	switch (OP)
	{
	default:
		std::cout << "Choose other option.";
		break;
	case 1:
		A.eraseAllExpositors();
		system("PAUSE");
		system("CLS");
		break;
	case 2:
		A.eraseExpositor();
		system("PAUSE");
		system("CLS");
		break;
	case 3:
		A.eraseAllWorkArt();
		system("PAUSE");
		system("CLS");
		break;
	case 4:
		A.eraseWorkArtbyName();
		system("PAUSE");
		system("CLS");
		break;
	}
}

void Start::Edit()
{
	int OP;
	std::cout << "\t MAXIMILIANO FONSECA's GALLERY" << std::endl;
	std::cout << "1.- Edit Photograph." << std::endl;
	std::cout << "2.- Edit Workart." << std::endl;
	std::cout << "CHOOSE AN OPTION:";
	std::cin >> OP;
	switch (OP)
	{
	default:
		std::cout << "Choose other option.";
		break;
	case 1:
		A.EditPhotographs();
		system("PAUSE");
		system("CLS");
		break;
	case 2:
		A.EditWorkArt();
		system("PAUSE");
		system("CLS");
		break;
	}
}

void Start::Configuration()
{
	int OP;
	std::cout << "\t MAXIMILIANO FONSECA's GALLERY" << std::endl;
	std::cout << "1.- Change password." << std::endl;
	std::cout << "CHOOSE AN OPTION:";
	std::cin >> OP;
	switch (OP)
	{
	default:
		std::cout << "Choose other option.";
		break;
	case 1:
		A.Pass();
		system("PAUSE");
		system("CLS");
		break;
	}
}

void Start::GalleryView()
{
	int x = 0;
	while (x < A.Expositors.size()) {
		if (A.Expositors.at(x).Collection.size()) {
			for (int j = 0; j < A.Expositors.at(x).Collection.size(); j++) {
				std::cout << "*****************\n*		*\n*		*\n*		*\n*		*\n*		*\n*		*\n*		*\n*		*\n*****************" << std::endl;
				std::cout << "Title: "<<A.Expositors.at(x).Collection.at(j).showTitle() << std::endl;
				std::cout << "Price: " << A.Expositors.at(x).Collection.at(j).showPrice() << std::endl;

				std::cout << "Instagram: @" << A.Expositors.at(x).showUsername() << std::endl;

				system("PAUSE");
				system("CLS");
			}
		}
		x++;
	}
}

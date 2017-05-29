// Video Game Backlog
// Main.cpp
// Created by Peter Lodato
// Originally created 28 May 2017
// Last modified 28 May 2017

#include <iostream>
#include <fstream>
#include <Game.h>

using namespace std;

int main() {

	char menu_choice;
	bool invalid_choice;
	bool new_file = 0;

	cout << "Hello, and welcome to the Video Game Backlog!" << endl <<
		"In this program, you create and maintain a video game backlog, which is a list of video games that you have along with information regarding whether you have completed it or not." << endl << endl <<
		"Now searching for pre-existing backlog file..." << endl << endl;

	// ***TBI (TO BE IMPLEMENTED)***: Menu prompt ("TBI" means that a menu propmpt will go here in the near future)

	fstream file;
	file.open("backlog.txt", fstream::in);

	// File already exists: have user create new file or open existing file.
	if (file.is_open()) {

		cout << "Backlog file found!" << endl <<
			"Would you like to create a new one (C) or open the existing file (any other key)? ";
		cin >> menu_choice;

		if (menu_choice == 'c' | menu_choice == 'c') {
			file.close();
			file.open("backlog.txt", fstream::out | fstream::trunc);
			new_file = 1;
		}
		else {

		}

	}
	
	// File doesn't exist: have user create new file or exit program.
	else {

		file.close();
		cout << "Backlog file not found." << endl <<
			"Would you like to create a new one (Y) or exit the program (any other key)? ";
		cin >> menu_choice;

		if (menu_choice == 'y' || menu_choice == 'Y') {
			file.close();
			file.open("backlog.txt", fstream::out);
			new_file = 1;
		}
		else
			return 0;
	}


	return 0;
}

// Video Game Backlog
// Main.cpp
// Created by Peter Lodato
// Originally created 28 May 2017
// Last modified 29 May 2017

#include <iostream>
#include <fstream>
#include "Game.h"

using namespace std;

vector <CGame> read_file(fstream file);
string read_one_line(fstream file);
vector <string> read_multiple_lines(fstream file);
void write_file(fstream file);

int main() {
	fstream file;
	vector <CGame> backlog;

	char menu_choice;

	cout << "Hello, and welcome to the Video Game Backlog!" << endl <<
		"In this program, you create and maintain a video game backlog, which is a list of video games that you have along with information regarding whether you have completed it or not." << endl << endl <<
		"Now searching for pre-existing backlog file..." << endl << endl;

	file.open("backlog.txt", fstream::in);

	// File already exists: have user create new file or open existing file.
	if (file.is_open()) {

		file.close();
		cout << "Backlog file found!" << endl <<
			"Would you like to create a new one (C) or open the existing file (any other key)? ";
		cin >> menu_choice;

		if (menu_choice == 'c' | menu_choice == 'c') {
			file.open("backlog.txt", fstream::out | fstream::trunc);
		}
		else {
			file.open("backlog.txt", fstream::in);
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
		}
		else
			return 0;
	}


	return 0;
}

vector <CGame> read_file(fstream file) {
	string game_name;
	vector <string> versions;
	string completion_status_string;
	Status completion_statue;
	string num_of_completion_times_string;
	int num_of_completion_times;
	
	while (file.eof()) {
		game_name = read_one_line(file);
		versions = read_multiple_lines(file);
		completion_status_string = read_one_line(file);
		num_of_completion_times = stoi(read_one_line(file));
	}
}

string read_one_line(fstream file) {
	string line;

	do {
		getline(file, line);
	} while (line[0] != '#');

	return line;
}

vector <string> read_multiple_lines(fstream file) {
	string line;
	vector <string> lines;

	do {
		getline(file, line);
		lines.push_back(line);
	} while (line[0] != '#');
}

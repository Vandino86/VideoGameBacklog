// Video Game Backlog
// Game.h
// Created by Peter Lodato
// Originally created 28 May 2017
// Last modified 29 May 2017

#pragma once

#include <string>
#include <vector>

using namespace std;

enum class Status {
	NOT_STARTED,
	IN_PROGRESS,
	COMPLETED
};

class CGame
{
private:
	string game_name;
	vector <string> versions;
	Status completion_status;
	int num_of_completions;
public:
	CGame();
	CGame(const string new_game_name, const vector <string> new_versions, const Status new_completion_status, const int new_num_of_completions);
	string get_game_name();
	void set_game_name(const string new_game_name);
	vector <string> get_versions();
	void set_versions(const vector <string> new_versions);
	Status get_completion_status();
	void set_completion_status(const Status new_completion_status);
	int get_num_of_completions();
	void set_num_of_completions(const int new_num_of_completions);
	~CGame();
};


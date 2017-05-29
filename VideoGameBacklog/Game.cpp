// Video Game Backlog
// Game.cpp
// Created by Peter Lodato
// Originally created 28 May 2017
// Last modified 29 May 2017

#include "Game.h"

using namespace std;

CGame::CGame() {
}

CGame::CGame(const string new_game_name, const vector<string> new_versions, const Status new_completion_status, const int new_num_of_completions)
:game_name(new_game_name), versions(new_versions), completion_status(new_completion_status), num_of_completions(new_num_of_completions) {}

string CGame::get_game_name() {
	return game_name;
}

void CGame::set_game_name(const string new_game_name) {
	game_name = new_game_name;
}

vector<string> CGame::get_versions() {
	return versions;
}

void CGame::set_versions(const vector<string> new_versions) {
	versions = new_versions;
}

Status CGame::get_completion_status() {
	return completion_status;
}

void CGame::set_completion_status(const Status new_completion_status) {
	completion_status = new_completion_status;
}

int CGame::get_num_of_completions() {
	return num_of_completions;
}

void CGame::set_num_of_completions(const int new_num_of_completions) {
	num_of_completions = new_num_of_completions;
}

CGame::~CGame() {
}

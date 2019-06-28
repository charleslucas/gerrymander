/*
 * voter.cpp
 *
 *  Created on: Jun 27, 2019
 *      Author: Charles Lucas
 */

#include <iostream>
using namespace std;

#include "voter.h"

void Voter::initialize()
{
	last_vote = rand() % 2;
	//reliability = 100;  // For testing
	//turnout     = 100;  // For testing
	reliability = (rand() % 25) + 50;
	turnout     = rand() % 100;
}

void Voter::set_id(int id)
{
	this->id = id;
}

bool Voter::get_last_vote()
{
	return last_vote;
}

int Voter::get_reliability()
{
	return reliability;
}

int Voter::get_turnout()
{
	return turnout;
}

bool Voter::will_vote()
{
	int rand_percent;

	rand_percent = rand() % 100;

	if (rand_percent >= turnout) return true;
	else return false;
}

bool Voter::cast_vote()
{
	int rand_percent;

	rand_percent = rand() % 100;

	if (rand_percent >= reliability) return last_vote;
	else return !last_vote;
}

string Voter::get_info()
{
	string info;

	cout << "last_vote = " << last_vote << ", reliability = " << reliability << "%, turnout = " << turnout << "%\n" << endl;
	return string("last_vote = ") + to_string(last_vote) + string(", reliability = ")  + to_string(reliability) + string("%, turnout = ") + to_string(turnout) + string("%\n");
}

void Voter::print_info()
{
	string info;

	cout << "             voter id = " << id << ", last_vote = " << last_vote << ", reliability = " << reliability << "%, turnout = " << turnout << "%" << endl;
}

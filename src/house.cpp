/*
 * house.cpp
 *
 *  Created on: Jun 27, 2019
 *      Author: Charles Lucas
 */

#include "house.h"

void House::initialize()
{
	number_of_voters = (rand() % 4) + 1;  // 1 - 4 voters
}

void House::initialize_voters()
{
	voters = new Voter[number_of_voters];

	// Initialize all voters in our array
	for (int i = 0; i < number_of_voters; i++)
	{
		voters[i].initialize();
		voters[i].set_id(i);

	    //printf("Initialized    voter %i - %s\n", (i+1), voters[i].get_info());
	    voters[i].print_info();
	}
}

void House::set_coordinates(int y, int x)
{
	y_coordinate = y;
	x_coordinate = x;
}

int House::get_x_coordinate() const
{
	return x_coordinate;
}

int House::get_y_coordinate() const
{
	return y_coordinate;
}

int House::get_number_of_voters() const
{
	return number_of_voters;
}


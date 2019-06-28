/*
 * house.h
 *
 *  Created on: Jun 27, 2019
 *      Author: Charles Lucas
 */

#ifndef HOUSE_H_
#define HOUSE_H_

#include "voter.h"

class House
{
private:
	int x_coordinate;
	int y_coordinate;
	int number_of_voters;
	Voter *voters;
public:
	void initialize();
	void initialize_voters();
	void set_coordinates(int y, int x);
	int  get_x_coordinate() const;
	int  get_y_coordinate() const;
	int  get_number_of_voters() const;
	//void print() const;
};



#endif /* HOUSE_H_ */

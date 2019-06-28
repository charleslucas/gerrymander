/*
 * map.h
 *
 *  Created on: Jun 27, 2019
 *      Author: Charles Lucas
 */

#ifndef MAP_H_
#define MAP_H_

#include "house.h"

class Map
{
private:
	int height;
	int width;
	int number_of_districts;
	House* houses;
public:
	void initialize(int h, int w);
	void initialize_houses();  // Allocate house memory and initialize houses
	//void print() const;
	void cleanup_houses();     // Deallocate house memory

};


#endif /* MAP_H_ */

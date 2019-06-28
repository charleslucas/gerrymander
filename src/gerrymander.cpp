//============================================================================
// Name        : gerrymander.cpp
// Author      : Charles Lucas
// Version     : 0.1
// Copyright   : Copyright 2019 - Lucas Engineering Inc.
// Description : Gerrymandering Simulator
//============================================================================

#include <iostream>
using namespace std;

#include "map.h"

int main() {
	int city_height = 10;
	int city_width  = 10;
	Map city_map;

	cout << "Gerrymander Simulator 0.1" << endl;

	city_map.initialize(city_height, city_width);
	city_map.initialize_houses();

	// Do_stuff

	city_map.cleanup_houses();

	return 0;
}

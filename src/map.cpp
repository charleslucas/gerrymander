/*
 * map.cpp
 *
 *  Created on: Jun 27, 2019
 *      Author: Charles Lucas
 */

#include "map.h"

void Map::initialize(int h, int w)
{
	height = h;
	width  = w;
}

void Map::initialize_houses()  // Initialize our grid of houses
{
//	houses = new House*[height][width];
//  houses = (House*)malloc(sizeof(House)*height*width);  // Allocate memory for a two-dimensional grid of houses

    House** houses = new House*[height];
    for(int i = 0; i < height; ++i)
        houses[i] = new House[width];

    if(houses == NULL) {
       printf("\nError! House memory not allocated.");
       exit(0);
    }

    for (int j = 0; j < height; j++)      // Y (Rows)
	{
		for (int i = 0; i < width; i++)   // X (Houses in each row)
		{
		    printf("Initializing house %i/%i\n", j, i);
			houses[j][i].initialize();
			houses[j][i].set_coordinates(j,i);
			houses[j][i].initialize_voters();
		}
	}
}

void Map::cleanup_houses()
{
	free(houses);
}

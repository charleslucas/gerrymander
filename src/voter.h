/*
 * voter.h
 *
 *  Created on: Jun 27, 2019
 *      Author: Charles Lucas
 */

#ifndef VOTER_H_
#define VOTER_H_

#include <string>
using namespace std;

class Voter
{
private:
	int    id;           // Which voter in the house are we
	bool   last_vote;    //  0 or 1
	int    reliability;  // 75-100%
	int    turnout;      //  0-100%
public:
	void   initialize();
	void   set_id(int id);
	bool   get_last_vote();
	int    get_reliability();
	int    get_turnout();
	bool   will_vote();
	bool   cast_vote();
	string get_info();
	void   print_info();
};


#endif /* VOTER_H_ */

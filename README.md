Gerrymander Simulator
Charles Lucas
charles@lucas.net
(c) 2019


Build command:
g++ src/gerrymander.cpp src/map.cpp src/house.cpp src/voter.cpp -o gerrymander

-------------------------------------------------------------------------------

The purpose of this program is to simulate a very simple set of voting districts and the way those can be
manipulated to favor one party or the other.


We have a perfect geographic grid of variable size with one house per block.
There are no inherent restrictions how houses can be grouped together into districts.

Each house will contain 0-4 voters.

Each voter will have members:
  How they voted in the last election they participated in.
  Their "reliability" rating - how likely they are to vote the same way in the next election. (Values 80-100%)
  Their "turnout" rating - how likely they are to vote in each election. (Values 0-100%)

Houses will be grouped into contiguous districts of approximately even population.
This will take into account how each voter voted in the last election, but not their reliability or turnout ratings.

Each time an election is run, each voter in each district will be given the opportunity to cast a vote
in their district, and will randomly decide whether to vote and for which party based on their 
reliability and turnout ratings.

Simple majority wins for each district.

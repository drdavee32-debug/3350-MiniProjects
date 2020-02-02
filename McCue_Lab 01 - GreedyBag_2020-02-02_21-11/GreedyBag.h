// File:        GreedyBag.h
// Description: Inherits from array bag implementation and override 2 thing clear and remove
// Author:      Davis McCue (dmccue@bgsu.edu)
// Course:      CS3350
#ifndef GREEDY_BAG_H_
#define GREEDY_BAG_H_
#include "ArrayBag.h"

class GreedyBag : public ArrayBag 
{
public:
//overrrides past operator of these 2 below
	void clear() override;
    bool remove(const ItemType& anEntry) override;
};

#endif

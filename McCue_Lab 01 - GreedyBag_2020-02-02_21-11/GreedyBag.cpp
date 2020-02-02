// File:        GreedyBag.cpp
// Description: implementation file for the class GreedyBag
// Author:      Davis McCue(dmccue@bgsu.edu)
// Course:      CS3350
#include "GreedyBag.h"
#include <iostream> // For cout and cin
#include <string> // For string objects
#include <vector>

bool GreedyBag::remove(const ItemType& anEntry)
{
	bool canRemoveItem = !isEmpty();
	if (canRemoveItem)
	{
	    //if items are still in bag
	    canRemoveItem == true;
	}
	else
	{
	    //if no items are in bag
	    canRemoveItem == false;
	}// end if
    
	return canRemoveItem;
}  // end remove

void GreedyBag::clear()
{
    
}  // end clear

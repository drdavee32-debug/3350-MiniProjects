//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** Implementation file for the class ArrayBag.
 @file ArrayBag.cpp */

#include "ArrayBag.h"
#include <cstddef>

ArrayBag::ArrayBag(): itemCount(0), maxItems(DEFAULT_CAPACITY)
{
}  // end default constructor

int ArrayBag::getCurrentSize() const
{
	return itemCount;
}  // end getCurrentSize

bool ArrayBag::isEmpty() const
{
	return itemCount == 0;
}  // end isEmpty

bool ArrayBag::add(const ItemType& newEntry)
{
	bool hasRoomToAdd = (itemCount < maxItems);
	if (hasRoomToAdd)
	{
		items[itemCount] = newEntry;
		itemCount++;
	}  // end if
    
	return hasRoomToAdd;
}  // end add

bool ArrayBag::remove(const ItemType& anEntry)
{
   int locatedIndex = getIndexOf(anEntry);
	bool canRemoveItem = !isEmpty() && (locatedIndex > -1);
	if (canRemoveItem)
	{
		itemCount--;
		items[locatedIndex] = items[itemCount];
	}  // end if
    
	return canRemoveItem;
}  // end remove

void ArrayBag::clear()
{
	itemCount = 0;
}  // end clear

bool ArrayBag::contains(const ItemType& anEntry) const
{
	return getIndexOf(anEntry) > -1;
}  // end contains

// private
int ArrayBag::getIndexOf(const ItemType& target) const
{
	bool found = false;
   int result = -1;
   int searchIndex = 0;
   
   // If the bag is empty, itemCount is zero, so loop is skipped
   while (!found && (searchIndex < itemCount))
   {
      if (items[searchIndex] == target)
      {
         found = true;
         result = searchIndex;
      } 
      else
      {
         searchIndex++;
      }  // end if
   }  // end while
   
   return result;
}  // end getIndexOf

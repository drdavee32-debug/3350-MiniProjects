// File:        lab1.cpp
// Description: This is the driver file that exc and runs the program.
// Author:      Davis McCue(dmccue@bgsu.edu)
// Course:      CS3350
#include "BagInterface.h"
#include "GreedyBag.h"
#include <iostream> 
#include <string> 
#include <vector>

using namespace std;
 
int main ( int argc, char *argv[] )
{
  //creates a bag    
  GreedyBag b;
  int convertingToNumbers1 = (argc);
  int convertingToNumbers2 = (atoi(argv[0]));
  convertingToNumbers2 = convertingToNumbers2 + 1;
  
  //cycles through the bag adding 1 item to the bag each time and plus 1 in the beginning to not get the file name included
  for (int i = convertingToNumbers2; i < convertingToNumbers1; i++) 
  {
      argv[i + 1];
      b.add(i);
  }
  //checks how many items are in bag
  cout << b.getCurrentSize() << endl;
  //removes items 
  b.remove(atoi(argv[1]));
  cout << b.getCurrentSize() << endl;

  return 0;
}
   
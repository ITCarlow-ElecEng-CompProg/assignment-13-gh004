//  Gearoid Hanrahan
//  C00108964
//  Lab 13

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main ()
{
  srand ( time(NULL) ); //initialize the random seed


  const char arrayNum[4] = {'1', '3', '7', '9'};
  int RandIndex = rand() % 4; //generates a random number between 0 and 3
  cout << arrayNum[RandIndex];
}

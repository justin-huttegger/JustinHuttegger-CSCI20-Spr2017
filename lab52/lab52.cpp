#include <iostream>
#include <cstdlib>
#include <ctime>
#include "MyClass.cpp"
using namespace std;

// Program starts here
int main() {
  // Create a MyClass Object
  MyClass object;

  //Send a number to the Object
  object.SetNumber(randomNumber());

  // Call the output member function
  object.Output();

  // This ends our program
  return 0;
}
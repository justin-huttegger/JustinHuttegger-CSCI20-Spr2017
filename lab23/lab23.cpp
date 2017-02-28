/*Justin Huttegger
  CSCI 20
  Feb 23, 2017
  2.3 Lab - Function Input
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void swapNumber(int &userNumber, int &userNumber2) { //swapping function to change order of numbers
    userNumber2 = userNumber + userNumber2;
    userNumber = userNumber2 - userNumber;
    userNumber2 = userNumber2 - userNumber;
    
    return;
}

 void randomNumber(int &userNumber, int &userNumber2) {
    srand(time(0));
    
    cout << "A random number between ";
    swapNumber(userNumber, userNumber2);
    cout << userNumber2 << " and " << userNumber << " is " << rand();
    
    return;
} 


int main()
{
  int userNumber, userNumber2;
  
  cout << "Enter two numbers: ";
  cin >> userNumber >> userNumber2;
 
  swapNumber(userNumber, userNumber2);
  randomNumber(userNumber, userNumber2);
  
    return 0;
}
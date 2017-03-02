/*Justin Huttegger
  CSCI 20
  Feb 23, 2017
  2.3 Lab - Function Input
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Swap(int &userNumber, int &userNumber2) { //swapping function to change order of numbers
  int x,y;
  x = userNumber;
  y = userNumber2;
  userNumber = y;
  userNumber2 = x;
    
}

 void randomNumber(int &userNumber, int &userNumber2) {
    srand(time(0));
    
    cout << "A random number between ";
    Swap(userNumber, userNumber2);
    cout << userNumber << " and " << userNumber2 << " is " << rand() % (userNumber2-userNumber) + userNumber + 1;
    
    return;
} 


int main()
{
  int userNumber, userNumber2;
  
  cout << "Enter two numbers: ";
  cin >> userNumber >> userNumber2;
 
  Swap(userNumber, userNumber2);
  randomNumber(userNumber, userNumber2);
  
    return 0;
}
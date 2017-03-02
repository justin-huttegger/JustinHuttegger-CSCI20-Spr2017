/*Justin Huttegger
  CSCI 20
  March 2, 2017
  2.4 Lab - Function Returns
*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const double KILO_PER_POUND = 2.21; //constant variable for kilograms per pound

void Swap(int &userNumber, int &userNumber2) { //swapping function to change order of numbers
  int x,y;
  x = userNumber;
  y = userNumber2;
  userNumber = y;
  userNumber2 = x;
    
}

 int randomNumber(int &userNumber, int &userNumber2) { //random number generator
    srand(time(0));
    int randNum = 0; //variable to save the random number
    
    Swap(userNumber, userNumber2); //uses the swap function to change the order of the user inputs
    randNum = rand() % (userNumber2 - userNumber) + userNumber + 1; //gives a random number between the two user inputs
    
    return randNum;
} 

double PoundsToKilograms(){ //takes the user input for pounds and outputs the equivalent value in kilograms
  
}

double KilogramsToPounds(){ //takes the user input for kilograms and outputs the equivalent value in pounds
  
}

int main()
{
  int userNumber, userNumber2;
  
  cout << "Enter two numbers: ";
  cin >> userNumber >> userNumber2;
  
  cout << "Random number is: ";
  Swap(userNumber, userNumber2);
  cout << randomNumber(userNumber, userNumber2);
  
    return 0;
}
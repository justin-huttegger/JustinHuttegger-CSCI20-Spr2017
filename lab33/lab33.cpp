/*Justin Huttegger
  CSCI 20
  March 2, 2017
  3.3 Lab - Loops: A guessing game.  Reads a value between 1 and 50.  The program will check the user’s number against the computer generated number.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int userNumber;
    int randomNumber;
    int numGuesses;
    
    randomNumber = rand() % 50 + 1;
    
    cout << "Enter a number between 1 and 50 to guess the random number." << endl;
    cin >> userNumber;
        
        while (randomNumber != userNumber) {
            if (randomNumber > userNumber) {
                cout << "Too low. Try again" << endl;
            } // end if
            else if (randomNumber < userNumber) {
                cout << "Too high. Try again." << endl;
            } // end else if
            else {
                cout << "That's right!" << endl;
                
                userNumber == randomNumber;
            }
            } // end while
 
       return 0;
} // end main  
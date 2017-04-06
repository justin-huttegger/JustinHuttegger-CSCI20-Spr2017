/*Justin Huttegger
  CSCI 20
  April 6, 2017
  3.0 Assignment - Game: Pig – Player and computer roll a dice. If the player or the computer rolls a 1 they get 0 points for that turn. They keep rolling until they get a 1 or decide to hold.
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
    
int main() {
    
    const int SCORE_LIMIT = 100;
    int diceNumber;    
    int computerScore = 0, userScore = 0;
    int turnScore = 0;
    int diceRoll = 0;
    char turnChoice;
    bool change = false;
    
    srand(time(0));

    cout << "How many sides does the die have?" << endl;
    cin >> diceNumber;

    
        while (change == false) {
            cout << "Type [r] to roll, [h] to hold, or [q] to quit." << endl;
            cin >> turnChoice;
            
            if (turnChoice == 'r') {
                diceRoll = rand() % diceNumber + 1;
        
                if (diceRoll > 1){
                    cout << "You rolled a " << diceRoll << "." << endl;
                    turnScore += diceRoll;
                    cout << "This adds " << turnScore << " points if you pass the die now. " << endl;
                    
                    if (turnScore + userScore >= 100) {
                        cout << "You win!";
                        return 0;
                    }
                } //end if for roll > 1
                
                    else {
                        cout << "You rolled a 1. You lost your points for this turn and it is the computers turn now." << endl;
                        change = true;
                        turnScore = 0;
                    } // end else
            } //end if for roll
    
            if (turnChoice == 'h') {
                userScore += turnScore;
                cout << "Your score is now " << userScore << "." << endl;
                turnScore = 0;
                change = true;
            } //end if for hold
    
            if (turnChoice == 'q') {
                cout << "Thanks for playing!" << endl;
                    return 0;
            }// end if for quit
        
            else if (turnChoice > 'r' || turnChoice < 'p') {
                cout << "Please type a valid letter." << endl;
            } //end else if
    } // end while false

        while(change == true) {
            turnChoice = 'r';
            cout << "The computer rolls." << endl;
        
            if (turnChoice == 'r') {
                diceRoll = rand() % diceNumber + 1;
            
                if(diceRoll > 1) {
                    cout << "The computer rolled a " << diceRoll << "." << endl;
                    turnScore += diceRoll;
                    cout << "This adds " << turnScore << " points if the computer passes the die now. " << endl;
                    
                    if (turnScore + computerScore >= 100) {
                        cout << "The computer wins!";
                        return 0;
                    }
                } // end if
                else {
                    cout << "The computer rolled a 1. It lost the points and it is now your turn.";
                    change = false;
                    turnScore = 0;
                } // end else
            } //end if for computer roll
        
            else {
                turnChoice = 'h';                
                cout << "The computer decided to hold." << endl;
                computerScore += turnScore;
                turnScore = 0;
                cout << "The computer has " << computerScore << " points." << endl;
                change = false;
            } //end else
        } //end while true
    
} //end main

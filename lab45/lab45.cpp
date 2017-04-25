/*Justin Huttegger
  CSCI 20
  April 18, 2017
  4.5 Lab - String: This program is responsible for creating user names for a new website you have created.  
  It should accept a first name of up to 10 characters and a last name of up to 20 characters.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    string firstName;
    string lastName;
    
    NameStart:
    cout << "Enter your first name." << endl;
    cin >> firstName;
    

    if(firstName.size() >= 11) {
        cout << "First name can only be 10 characters or less." << endl;
        
        goto NameStart; //return to the start if their name is too long
    } // end first name if
    
    
    cout << "Enter your last name." << endl;
    cin >> lastName;
    

    if(lastName.size() >= 11) {
        cout << "Last name can only be 20 characters or less." << endl;
        goto NameStart;
    } // end last name if
    
    if(lastName == firstName) {
        cout << "First and last name are the same." << endl;

    }
    
    cout << "Choose your username." << endl;
    cout << firstName[0] << firstName[1] << lastName << endl;
    cout << firstName << lastName << endl;
    cout << firstName[0] << lastName << endl;
    
    return 0;
} //end main
/*Justin Huttegger
  CSCI 20
  April 18, 2017
  4.4 Lab - C Strings: This program is responsible for creating user names for a new website you have created.  
  It should accept a first name of up to 10 characters and a last name of up to 20 characters.
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    int size = 0;
    int size1 = 0;
    
    char firstName[10];
    char lastName[20];
    
    NameStart:
    cout << "Enter your first name." << endl;
    cin >> firstName;
    
    size == strlen(firstName); //Gets the length of the string
    if(size >= 11) {
        cout << "First name can only be 10 characters or less." << endl;
        
        goto NameStart; //return to the start if their name is too long
    } // end first name if
    
    
    cout << "Enter your last name." << endl;
    cin >> lastName;
    
    size == strlen(lastName);
    if(size >= 11) {
        cout << "Last name can only be 20 characters or less." << endl;
        goto NameStart;
    } // end last name if
    
    cout << "Choose your username." << endl;
    cout << firstName[0] << firstName[1] << lastName << endl;
    cout << firstName << lastName << endl;
    cout << firstName[0] << lastName << endl;
    
    return 0;
} //end main
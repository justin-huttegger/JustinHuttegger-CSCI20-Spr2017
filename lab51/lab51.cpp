/*Justin Huttegger
  CSCI 20
  April 18, 2017
  5.1 Lab - Pointers
*/

#include <iostream> 
#include <iostream> 
#include <cstring> //allows the use of the cstring library
using namespace std;   

int main() {
    int nameLength = 0;
    char * name = new char[]; //pointer doesn't work since it isn't an int

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name; //lets the user input a value for the pointer

    char * head  = name;
    char * tail = name;
    nameLength = strlen(*name);

    cout << "Your word is " << firststr << endl; //firststr isn't a variable being used

    if (nameLength<10)
    {
         while (*head != '\0')
         {
                cout << *head;
                head++;
         }
     }
     else //outputs if the input is more than 10 characters
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;

     tail = &name[strlen(name) - 1];

     if (nameLength < 10) 
     {
          while (tail != name)
          {
                 cout << *tail;
                 tail--;
          }
     }
     cout << endl;

     head = name;
     tail = &name[strlen(name) - 1]; //name pointer, length of name - 1

     head++; //add to head
     tail--; //subtract from tail

     if (*head == *tail) //if the length is the same
     {
         cout << "It is an palindrome!" << endl;
     }
     else //if the length is not the same
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}
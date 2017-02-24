/*Justin Huttegger
  CSCI 20
  Feb 23, 2017
  2.2 Lab - Writing Functions
  
  
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randNumber()

{
    srand(time(0));
    //int randomNumber = rand() % 100 + 1;



    cout<<"The random number was "<< rand() % 100 + 1 << endl;
    
    return;
}



int main() 
{ 
    
    randNumber();
    
    return 0;
}
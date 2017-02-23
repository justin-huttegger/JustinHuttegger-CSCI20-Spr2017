/*Justin Huttegger
  CSCI 20
  Feb 21, 2017
  2.1 Lab - Calling Functions
  
  The program outputs information about windchills based on what the user's inputs are.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() { 
    
    double OldStyleWindChill = 0.0;
    double NewStyleWindChill = 0.0;
    double windVelocity = 0.0;
    double tempF = 0.0;
    double speedDifference = 0.0;
    
    cout << "Enter the wind speed: " << endl;
    cin >> windVelocity;
    
    cout << "Enter the temperature: " << endl;
    cin >> tempF;
    
    OldStyleWindChill = 0.081 * ( ( 3.71 * (sqrt( windVelocity ) )) +  5.81 - 0.25  * windVelocity ) * ( tempF - 91.4 ) + 91.4;
    
    NewStyleWindChill = ( ( 35.74 + 0.6215 ) * tempF ) - ( 35.75 * pow( windVelocity, 0.16) + ( 0.4275 * tempF ) * pow(windVelocity, 0.16 ) );
    
    speedDifference = NewStyleWindChill - OldStyleWindChill;
    
    cout << "Wind Speed: " << windVelocity << ", Old Formula: " << OldStyleWindChill << ", New Formula: " << NewStyleWindChill << ", Difference: " << speedDifference;
    
    return 0;
}
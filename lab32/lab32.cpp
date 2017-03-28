/*Justin Huttegger
  CSCI 20
  March 2, 2017
  3.2 Lab - Switch Case: Program that will calculate the income tax, and amount owed or to be refunded for a person or couple.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string personName;
    int singleOrMarried;
    int amountWithheld;
    double taxOwed;
    double grossWages;
    const int PERSONAL_EXEMPTION = 3900;
    
    cout << "Enter your full name." << endl;
    std::getline (std::cin,personName);
    
    cout << "Enter your gross income." << endl;
    cin >> grossWages;
    
    cout << "Enter the amount withheld:" << endl;
    cin >> amountWithheld;
    
    cout << "Type 0 if you are single, and 1 if you are married.";
    cin >> singleOrMarried;
        switch (singleOrMarried) {
            case 0:
                if (grossWages < 8926) {
                    taxOwed = grossWages * 0.10;
                }
                else if (grossWages < 36251) {
                    taxOwed = (grossWages * 0.15) - 892.50;
                }
                else if (grossWages < 87851) {
                    taxOwed = (grossWages * 0.25) - 4991.25;
                }
                else if (grossWages >= 87951) {
                    taxOwed = (grossWages * 0.28) - 17891.25;
                }
                
            break;
            
            case 1:
                
            break;
            
            default:
                cout << "Unknown";
            break;
        }

    cout << taxOwed;
return 0;

}
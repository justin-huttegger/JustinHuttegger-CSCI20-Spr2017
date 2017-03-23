/*Justin Huttegger
  CSCI 20
  March 2, 2017
  3.1 Lab - Conditions: program for a cell phone company that uses formulas to determine the charges for their service.   
*/

#include <iostream>
using namespace std;

int main() {
    
    const int DUMB_PHONE = 0;
    const int SMART_PHONE = 5;
    const int TABLET_PRICE = 10;
    const int MONTHLY_CHARGE = 30;
    int priceTalkTextData = 75;
    int pricePerGB = 0;
    double corprateDiscount = 0.10;
    int familyDiscount = 3;
    int planType = 0;
    int dataAmount = 0;
    int dumbAmount = 0;
    int smartAmount = 0;
    int tabletAmount = 0;
    
    cout << "How many dumb phones do you want?" << endl;
    cin >> dumbAmount;
        if (dumbAmount > 0) {
            dumbAmount*0;
        }
    cout << "How many smart phones do you want?" << endl;
    cin >> smartAmount;
        if (smartAmount > 0) {
            smartAmount * 5;
        }
    
    cout << "How many tablets do you want?" << endl;
    cin >> tabletAmount;
        if (tabletAmount > 0) {
            tabletAmount * 10;
        }
    
   // cout << "Type 1 if you would only like unlimited talk and text. Type 2 if you would like to include data.";
    
    if (planType == 1) {
        
    }
    
}


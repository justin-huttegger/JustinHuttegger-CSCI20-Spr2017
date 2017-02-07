//Created By: Justin Huttegger
//Created On: 2/7/2017

#include <iostream>
using namespace std;

int main() {
    int userCents = 0;
    int outQuarters = .25;
    int outDimes = .10;
    int outNickels = .05;
    int outPennies = .01;
    
    
    cout << "Enter the amount of cents you have." << endl;
    cin >> userCents;
    
    outQuarters =  userCents / 25;
    outDimes = userCents % 25;
    outNickels = userCents % 25;
    outPennies = userCents % 25;


    cout <<"You have " << outQuarters << " quarters, " << outDimes << " dimes, " << outNickels << " nickels, and " << outPennies << " pennies."  << endl; // I DON'T KNOW WHY IT WON'T WORK, QUARTERS WORKS BUT EVERYTHING ELSE DOESN'T
    
    return 0;
}
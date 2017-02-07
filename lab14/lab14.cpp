//Created By: Justin Huttegger
//Created On: 2/7/2017

#include <iostream>
using namespace std;

int main() {
    int userCents = 0;
    int outQuarters = 25;
    int outDimes = 10;
    int outNickels = 5;
    int outPennies = 1;
    
    
    cout << "Enter the amount of cents you have." << endl;
    cin >> userCents;
    
    outQuarters =  userCents / 25;
    outDimes = userCents % 10;
    outNickels = userCents % 5;
    outPennies = userCents % 1;


    cout <<"You have " << outQuarters << " quarters, " << outDimes << " dimes, " << outNickels << " nickels, and " << outPennies << " pennies."  << endl;
    
    return 0;
}
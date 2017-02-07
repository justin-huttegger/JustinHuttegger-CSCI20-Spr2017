#include <iostream>
using namespace std;

int main() {
    int yearInFuture = 0;
    int currentYear = 2017;
    int currentPop = 324472975;
    int popChangePerYear = 2102400;
    
    cout << "How many years in the future would you like to predict?" << endl;
    cin >> yearInFuture;
    
    cout << "What is the current net gain of US population?" << endl;
    cin >> popChangePerYear;
    cout << "In the year " << currentYear + yearInFuture << " the population of the United States will be " << ( yearInFuture * popChangePerYear ) + currentPop; 
    cout << endl;
    
    
    return 0;
}
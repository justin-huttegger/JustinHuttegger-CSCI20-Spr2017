/*Justin Huttegger
  CSCI 20
  March 10, 2017
  2.0 Assignment - Class Conversion Calculators
  
  Conversion program for distance. When the user enters a measurement it will convert it to miles, yards, feet, or inches.
*/

#include <iostream>
#include <string>
using namespace std;


class DistanceConverter { //Class to convert distance
    public:
        void SetDistFromMiles( double milesDist );
        void SetDistFromYards( double yardsDist );
        void SetDistFromFeet( double feetDist );
        void SetDistFromInches( double inchesDist );
        void PrintDistances();
        DistanceConverter();
        DistanceConverter(double milesVal);
        
        double GetDistAsMiles();
        double GetDistAsYards();
        double GetDistAsFeet();
        double GetDistAsInches();
        double GetInitialDistance();
    private:
        double miles_;
};

    DistanceConverter::DistanceConverter(){ //Default constructor
        miles_ = 0;
    }
    
    DistanceConverter::DistanceConverter(double milesVal){
        miles_ = milesVal; 
    }
    
    
    void DistanceConverter::SetDistFromMiles( double milesDist ){
        miles_ = milesDist;
    }
    
    void DistanceConverter::SetDistFromYards( double yardsDist ){
        miles_ = yardsDist / 3;
    }
    
    void DistanceConverter::SetDistFromFeet( double feetDist ){
        miles_ = feetDist / 1;
    }
    
    void DistanceConverter::SetDistFromInches( double inchesDist ){
        miles_ = inchesDist / 0.08333333333;
    }
    
    double DistanceConverter::GetDistAsMiles(){
        return milesDist;
    }
    
    double DistanceConverter::GetDistAsYards(){
        return yardsDist;
    }
    
    double DistanceConverter::GetDistAsFeet(){
        return feetDist;
    }
    
    double DistanceConverter::GetDistAsInches(){
        return inchesDist;
    }
    
    void DistanceConverter::PrintDistances(double milesDist, double yardsDist, double feetDist, double inchesDist){
        cout << "Miles distance: " << milesDist;
        cout << "Yards distance: " << yardsDist;
        cout << "Feet distance: " << feetDist;
        cout << "Inches distance: " << inchesDist;
    }
    
    int main(){
        return 0;
    }
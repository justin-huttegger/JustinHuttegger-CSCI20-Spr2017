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
        void SetInitialDistance(double milesDist, double yardsDist, double feetDist, double inchesDist);
        void SetDistFromMiles( double milesDist );
        void SetDistFromYards( double yardsDist );
        void SetDistFromFeet( double feetDist );
        void SetDistFromInches( double inchesDist );
        void PrintDistances();
        DistanceConverter();
        DistanceConverter(double mile_);
        
        double GetDistAsMiles();
        double GetDistAsYards();
        double GetDistAsFeet();
        double GetDistAsInches();
        double GetInitialDistance();
    private:
        double initialDist_;
};

    DistanceConverter::DistanceConverter(){ //Default constructor
        initialDist_ = 0;
    }
    
    void DistanceConverter::SetInitialDistance( double milesDist, double yardsDist, double feetDist, double inchesDist){
        
        initialDist_ = milesDist;
        milesDist = 1;
        initialDist_ = yardsDist;
        yardsDist = 1760;
        initialDist_= feetDist;
        feetDist = 5280;
        initialDist_ = inchesDist;
       // inchesDist = ;
    }
    
    void DistanceConverter::SetDistFromMiles( double milesDist ){
        initialDist_ = milesDist;
    }
    
    void DistanceConverter::SetDistFromYards( double yardsDist ){
        initialDist_ = yardsDist / 3;
    }
    
    void DistanceConverter::SetDistFromFeet( double feetDist ){
        initialDist_ = feetDist / 1;
    }
    
    void DistanceConverter::SetDistFromInches( double inchesDist ){
        initialDist_ = inchesDist / 0.08333333333;
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
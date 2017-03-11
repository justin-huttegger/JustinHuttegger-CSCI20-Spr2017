/*Justin Huttegger
  CSCI 20
  March 2, 2017
  2.6 Lab - Classes and Constructors
*/

#include <iostream>
#include <string>
using namespace std;

class TemperatureConverter {
    public:
        void SetTempFromKelvin( double kelvinTemp );
        void SetTempFromCelsius( double celsiusTemp );
        void SetTempFromFahrenheit( double fahrenheitTemp );
        void PrintTemperatures();
        TemperatureConverter();
        TemperatureConverter(double kelvinVal);
        
        double GetTempAsKelvin();
        double GetTempAsCelsius();
        double GetTempAsFahrenheit();
        
    private:
        double kelvin_;
};

    TemperatureConverter::TemperatureConverter(){ //Default constructor
        kelvin_= 0;
    }
    
    TemperatureConverter::TemperatureConverter(double kelvinVal);{ //Overload constructor
        kelvin_ = double kelvinVal;
    }

    
    void TemperatureConverter::SetTempFromCelsius( double celsiusTemp ){
        kelvin_ = celsiusTemp + 273.15;
    }
    
    
    
    void TemperatureConverter::SetTempFromFahrenheit( double fahrenheitTemp ){//converts to fahrenheit
        kelvin_ = ( 5 * ( fahrenheitTemp - 32 ) / 9 ) + 273.15;
    }
    
    void TemperatureConverter::SetTempFromKelvin( double kelvinTemp ){
        kelvin_ = kelvinTemp;
    }
    
    double TemperatureConverter::GetTempAsCelsius(){
        double celsiusTemp = kelvin_ - 273.15;
        return celsiusTemp;
    }
    
    double TemperatureConverter::GetTempAsFahrenheit(){
        double fahrenheitTemp = ( ( (kelvin_ - 273.15) * 9 ) / 5 + 32 );
        return fahrenheitTemp;
    }
    
    double TemperatureConverter::GetTempAsKelvin(){
        double kelvinTemp = kelvin_;
        return kelvinTemp;
    }
        
    void TemperatureConverter::PrintTemperatures(){
        cout << "Kelvin: " << kelvinTemp;
        cout << "Celsius: " << celsiusTemp;
        cout << "Fahrenheit: " << fahrenheitTemp;
        
    }
    
    
    
 /* Created By: April Browne
 * Created On: 9/22/2016
 * This program will run the Temperature Converter Class
 */
 
int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}
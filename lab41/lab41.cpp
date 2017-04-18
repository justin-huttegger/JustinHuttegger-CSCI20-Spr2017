#include <iostream>
#include lab41.cpp
using namespace std;

class ArrayTools { 
    public: 
        string Print; 
        int Find_min;
        int Find_max;
        int Find_sum;
        int Num_even;
        int Num_odd;
        int Search;
        int Is_sorted;
    
    private:
}

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin<<myArray[i];
    }
    ArrayTools a(myArray);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}
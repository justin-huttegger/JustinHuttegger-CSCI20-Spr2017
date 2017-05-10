#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
 *  This class is to show how to
 *  break our class into an interface and implementation
 *  file. It will set a member variable to 0 on initialization
 *  and output it using the Output() function.
 */
#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
 public:
    MyClass();
    void Output();
    void SetNumber(int num);
    int GetNumber();
 
 private:
    
    int num_;
};

#endif

MyClass::MyClass() : num_(0) {}

void MyClass::Output() {
  cout << "My number is: " << num_ << endl;
}

void MyClass::SetNumber(int num){
   num_ = num;
}

int MyClass::GetNumber(){
   return num_;
}


int randomNumber(){
   srand(time(0));
   return ((rand()% 10) + 1);
}
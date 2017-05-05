/*Justin Huttegger
  CSCI 20
  April 18, 2017
  4.6 Lab - File Input/Output: Read a student’s grades and output an HTML page (Links to an external site.) Links to an external site
  to output a student’s transcript including semester GPA and overall GPA.  
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
ifstream test;
    string studentName;
    int unitNum1 = 0;  
    int unitNum2 = 0;
    int unitNum3 = 0;
    int unitNum4 = 0;
    int unitNum5 = 0;
    int semesterNum = 0;
    double semesterGPA = 0.0;
    double overallGPA = 0.0;
    char unitGrade1;
    char unitGrade2;
    char unitGrade3;
    char unitGrade4;
    char unitGrade5;
   

   cout << "Opening file test.txt." << endl;
   
   test.open("test.txt");
   if (!test.is_open()) {
      cout << "Could not open file test.txt." << endl;
      return 1; 
   }
   
    cout << "Reading student name." << endl;
    test >> studentName;
    cout << "Reading semester number." << endl;
    test >> semesterNum;
    cout << "Reading unit numbers." << endl;
    test >> unitNum1;
    test >> unitNum2;
    test >> unitNum3;
    test >> unitNum4;
    test >> unitNum5;
    cout << "Reading unit grades." << endl;
    test >> unitGrade1;
    test >> unitGrade2;
    test >> unitGrade3;
    test >> unitGrade4;
    test >> unitGrade5;
    
    
    cout << "Output semester GPA." << endl;
    test >> semesterGPA;
    cout << "Output overall GPA." << endl;
    test >> overallGPA;
    cout << "Closing file test.txt." << endl;
    test.close(); 
   

   
   return 0;
}
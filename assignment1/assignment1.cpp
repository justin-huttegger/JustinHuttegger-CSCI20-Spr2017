//Justin Huttegger

#include <iostream>
#include <string>
using namespace std;

struct points { // Struct for all the point values that will be entered.
    double studentPoints = 0;
    double averagePoints = 0;
    double totalPoints = 0;
} prep, lab, test;


   
    std::string studentName; // other variables that will be used to make the report card.
    double finalGrade = 0;
    double currentGrade = 0;
    double semesterPercent = 0;
    double finalStudentPoints = 0;
    double finalTotalPoints = 0;

int main() { 
    
    cout << "Please enter your name: ";
    std::getline (std::cin, studentName);
    
    cout << "Enter your points." "\n"; //All point values are entered.
    cout << "Prep: ";
    cin >> (prep.studentPoints);
    cout << "Labs: ";
    cin >> (lab.studentPoints);
    cout << "Tests: ";
    cin >> (test.studentPoints);
    
    cout << "Enter the total possible points." "\n";
    cout << "Prep: ";
    cin >> (prep.totalPoints);
    cout << "Labs: ";
    cin >> (lab.totalPoints);
    cout << "Tests: ";
    cin >> (test.totalPoints);
    
    cout << "Percentage of the semester completed: ";
    cin >> semesterPercent;
    
    
    finalStudentPoints = ( (prep.studentPoints * 0.30 ) + ( lab.studentPoints * 0.50 ) + ( test.studentPoints * 0.20 ) ); //Equations to get numbers to find the final grade.
    finalTotalPoints = ( (prep.totalPoints * 0.30 ) + ( lab.totalPoints * 0.50 ) + ( test.totalPoints * 0.20 ) ); 
    
    prep.averagePoints = ( (prep.studentPoints / prep.totalPoints) * 100 ); //Equations to find point averages.
    lab.averagePoints = ( (lab.studentPoints / lab.totalPoints) * 100 );
    test.averagePoints = ( (test.studentPoints / test.totalPoints) * 100 );
    
    currentGrade = ( finalStudentPoints / finalTotalPoints ) * 100; //Equation to get the final class grade
    finalGrade = ( semesterPercent / 100 ) * currentGrade;
    
    cout << "Report card:" << endl; //Report card with all information
    cout << "Name: " << studentName << endl;
    cout << "Average for prep: " << prep.averagePoints << "%" << endl;
    cout << "Average for labs: " << lab.averagePoints << "%" << endl;
    cout << "Average for tests: " << test.averagePoints << "%" <<endl;
    cout << "Your current grade is: " << currentGrade << "%" << endl;
    cout << "Final grade if nothing else is completed: " << finalGrade << "%" <<endl;
    return 0;
}
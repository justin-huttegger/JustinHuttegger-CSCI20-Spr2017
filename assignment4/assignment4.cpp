/*Justin Huttegger
  CSCI 20
  May 2, 2017
  Assignment 4 - Program Flow: This program will read in a students answers for a test and compare the answers to the corresponding answer key for the test.
  1 point for each correct answer, omitted answers get 0 points, and incorrect answers deduct 1/4 point. The program should output to the screem amd a file
  with the student's name, list of missed questions, and overall grade on the exam.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream studentAnswers;
    const int NUM_ELEMENTS = 19;
    int questionNumber[NUM_ELEMENTS];
    string questionAnswer[NUM_ELEMENTS];
    string studentName;
    char testAnswers;
    double finalGrade = 0.0;
    int i = 0;
    
    questionNumber[i] = 1;      questionAnswer[i] = 'a';
    questionNumber[i] = 2;      questionAnswer[i] = 'b';
    questionNumber[i] = 3;      questionAnswer[i] = 'c';
    questionNumber[i] = 4;      questionAnswer[i] = 'c';
    questionNumber[i] = 5;      questionAnswer[i] = 'c';
    questionNumber[i] = 6;      questionAnswer[i] = 'c';
    questionNumber[i] = 7;      questionAnswer[i] = 'a';
    questionNumber[i] = 8;      questionAnswer[i] = 'a';
    questionNumber[i] = 9;      questionAnswer[i] = 'b';
    questionNumber[i] = 10;      questionAnswer[i] = 'b';
    questionNumber[i] = 11;      questionAnswer[i] = 'f';
    questionNumber[i] = 12;      questionAnswer[i] = 'f';
    questionNumber[i] = 13;      questionAnswer[i] = 't';
    questionNumber[i] = 14;      questionAnswer[i] = 't';
    questionNumber[i] = 15;      questionAnswer[i] = 'f';
    questionNumber[i] = 16;      questionAnswer[i] = 't';
    questionNumber[i] = 17;      questionAnswer[i] = 'f';
    questionNumber[i] = 18;      questionAnswer[i] = 'f';
    questionNumber[i] = 19;      questionAnswer[i] = "Variable random condition";
    
    cout << "Opening file studentAnswers.txt." << endl;
   
    studentAnswers.open("studentAnswers.txt");
    if (!studentAnswers.is_open()) {
        cout << "Could not open file test.txt." << endl;
        return 1; 
   }

    cout << "Reading and printing student name." << endl;
    
    while (!studentAnswers.eof()) {
        studentAnswers >> studentName;
        if( studentAnswers.good() ) {
            cout << "Name: " << studentName << endl;
        }
    }
    cout << "Reading and writing student answers." << endl;
    while (!studentAnswers.eof()) {
        studentAnswers >> testAnswers;
        if( studentAnswers.good() ) {
            cout << "Answers: " << testAnswers << endl;
        }
    }
    cout << "Closing file studentAnswers.txt." << endl;
    
    studentAnswers.close();
    
    return 0;
}
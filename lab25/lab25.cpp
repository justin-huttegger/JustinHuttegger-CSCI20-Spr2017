/*Justin Huttegger
  CSCI 20
  March 2, 2017
  2.5 Lab - Classes & Mutator Functions
  Book class stores data about each book to output all the data for each book at the end of the program
*/

#include <iostream>
#include <string>
using namespace std;

class BookInfo {
    public:
       void SetTitle (string bookTitle);
       void SetAuthor (string bookAuthor);
       void SetCopyright (string bookCopyright);

       string GetTitle();
       string GetAuthor();
       string GetCopyright();
       
    private:
        string title;
        string author;
        string copyright;
};
    void BookInfo::SetTitle(string bookTitle) {
        title = bookTitle;
    }
    
    string BookInfo::GetTitle(){
        return title;
    }
    
        void BookInfo::SetAuthor(string bookAuthor) {
        author = bookAuthor;
    }
    
    string BookInfo::GetAuthor(){
        return author;
    }
        void BookInfo::SetCopyright(string bookCopyright) {
        copyright = bookCopyright;
    }
    
    string BookInfo::GetCopyright(){
        return copyright;
    }
    int main(){
        BookInfo Book1;
        Book1.SetTitle("Harry Potter and the Prisoner of Azkaban");
        Book1.SetAuthor("J.K. Rowling");
        Book1.SetCopyright("1999");
        
        
        cout << "The book title is " << Book1.GetTitle() << ", the author is " << Book1.GetAuthor() << " and the copyright is " << Book1.GetCopyright();
        
        return 0;
    }
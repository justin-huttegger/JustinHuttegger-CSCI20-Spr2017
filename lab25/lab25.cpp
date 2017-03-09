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
       void SetTitle (string bookTitle); //mutators
       void SetAuthor (string bookAuthor);
       void SetCopyright (string bookCopyright);

       string GetTitle(); //accessors
       string GetAuthor();
       string GetCopyright();
       
    private: //private string variables to print book info
        string title;
        string author;
        string copyright;
};
    void BookInfo::SetTitle(string bookTitle) { //member function of BookInfo class for the title
        title = bookTitle;
    }
    
    string BookInfo::GetTitle(){ //returns the input of the book title
        return title;
    }
    
        void BookInfo::SetAuthor(string bookAuthor) { //member function of BookInfo class for the author
        author = bookAuthor;
    }
    
    string BookInfo::GetAuthor(){ //returns the input of the book author
        return author;
    }
    
        void BookInfo::SetCopyright(string bookCopyright) { //member function of BookInfo class for the copyright
        copyright = bookCopyright;
    }
    
    string BookInfo::GetCopyright(){ //returns the input of the book copyright
        return copyright;
    }
    int main(){
        BookInfo Book1;
        Book1.SetTitle("Harry Potter and the Sorcerer's Stone"); //member access operators
        Book1.SetAuthor("J.K. Rowling");
        Book1.SetCopyright("1997");
        
        BookInfo Book2;
        Book2.SetTitle("Harry Potter and the Chamber of Secrets"); //member access operators
        Book2.SetAuthor("J.K. Rowling");
        Book2.SetCopyright("1998");
        
        BookInfo Book3;
        Book3.SetTitle("Harry Potter and the Prisoner of Azkaban"); //member access operators
        Book3.SetAuthor("J.K. Rowling");
        Book3.SetCopyright("1999");
        
        BookInfo Book4;
        Book4.SetTitle("Harry Potter and the Goblet of Fire"); //member access operators
        Book4.SetAuthor("J.K. Rowling");
        Book4.SetCopyright("2000");
        
        BookInfo Book5;
        Book5.SetTitle("Harry Potter and the Order of the Pheonix"); //member access operators
        Book5.SetAuthor("J.K. Rowling");
        Book5.SetCopyright("2003");
        
        cout << "The book title is " << Book1.GetTitle() << ", the author is " << Book1.GetAuthor() << ", and the copyright is " << Book1.GetCopyright() << endl;
        cout << "The book title is " << Book2.GetTitle() << ", the author is " << Book2.GetAuthor() << ", and the copyright is " << Book2.GetCopyright() << endl;
        cout << "The book title is " << Book3.GetTitle() << ", the author is " << Book3.GetAuthor() << ", and the copyright is " << Book3.GetCopyright() << endl;
        cout << "The book title is " << Book4.GetTitle() << ", the author is " << Book4.GetAuthor() << ", and the copyright is " << Book4.GetCopyright() << endl;
        cout << "The book title is " << Book5.GetTitle() << ", the author is " << Book5.GetAuthor() << ", and the copyright is " << Book5.GetCopyright() << endl;
        
        return 0;
    }
/*Justin Huttegger
  CSCI 20
  March 2, 2017
  2.5 Lab - Classes & Mutator Functions
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
    int main(){
        string titleCin;
        BookInfo output;
        output.SetTitle("HarryPotter");
        
        cout << "The book title is " << output.GetTitle();
        
        return 0;
    }
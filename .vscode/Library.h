//Christopher Alexan
//CSIS 135

#include <memory>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Book
{
    std::string title;
    std::string author;
    int publicationYear;
    int copiesAvailable;
    int copiesCheckedOut;
};

class Library //Delcaring Library Class in header file to be implemented in cpp file
{
private:
    //define your private vector of uniqueptr<Book>
    std::vector<std::unique_ptr<Book>> Books; //private vector defined for Books in library 
    //bookPtr->title
    //bookPtr->publicationYear
public:
    void DisplayBook(); //Declaring Display Book function. A function that displays the entire library of books with all their information. Like title, author, publication year and copies they have available.
    void BorrowBook(std::string title);
    void RemoveBook(std::string title);
    void AddBook(std::string title, std::string author, int publicationYear, int copiesAvailable);
    Library() {};
    ~Library() {};
};

/*My code is returning errors  that WinMain is undefined and I can't test my code to see what I can improve upon. I am also aware I am sorely lacking in terms of arrays, struct and classes defining values or just having the proper formating. I will continue to review the material and update it as I go.*/
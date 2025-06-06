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


    Book(std::string title, std::string author, int publicationYear, int copiesAvailable)
    {
        this->title = title;
        this->author = author;
        this->publicationYear = publicationYear;
        this->copiesAvailable = copiesAvailable;
        copiesCheckedOut = 0;
    }
};

class Library //Delcaring Library Class in header file to be implemented in cpp file
{
private:
    //define your private vector of uniqueptr<Book>
    std::vector<std::unique_ptr<Book>> _books; //private vector defined for Books in library 
    //bookPtr->title
    //bookPtr->publicationYear
public:
    void DisplayBook(); //Declaring Display Book function. A function that displays the entire library of books with all their information. Like title, author, publication year and copies they have available. which displays the smart vector.
    void BorrowBook(std::string title);//Declaring Borrow Book function that borrows a book from the library adjusting the copiesAvailable and copiesCheckedOut variables in vector.
    void RemoveBook(std::string title);//Declaring the remove book function that removes a book from the function and loops it back to the vector
    void AddBook(std::string title, std::string author, int publicationYear, int copiesAvailable);//Declaring the addbook function that adds a book to the library and has the user introduce all the different values and strings for it.
    Library() {};
    ~Library() {};
};

/*My code is returning errors  that WinMain is undefined and I can't test my code to see what I can improve upon. I am also aware I am sorely lacking in terms of arrays, struct and classes defining values or just having the proper formating. I will continue to review the material and update it as I go.*/
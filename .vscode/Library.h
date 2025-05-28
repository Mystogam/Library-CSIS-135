//Christopher Alexan
//CSIS 135

#include <iostream>
#include <string>

using namespace std;

class Library
{
private:
    /* data */
public:
    Library(/* args */);
    ~Library();
};

Library::Library(/* args */)
{
}

Library::~Library()
{
}

struct Book
{
    std::string book;
    std::string author;
    int publicationYear;
    int copiesAvailable;
    int copiesCheckedOut;
};

long long LibraryMenu();

void DisplayBook();

void BorrowBook(std::string title);

void RemoveBook(std::string title);

void AddBook(std::string title, std::string author, int publicationYear, int copiesAvailable);

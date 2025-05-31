//Christopher Alexan
//CSIS 135

#include <iostream>
#include <string>
using namespace std;

#ifndef LIBRARY_H
#define LIBRARY_H

class Library
{
private:
    
public:
    Library();
    
    ~Library();
};

Library::Library()
{
}

Library::~Library()
{
}

struct Book
{
    std::string title;
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

#endif
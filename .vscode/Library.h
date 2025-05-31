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
void DisplayBook();
void BorrowBook(std::string title);
void RemoveBook(std::string title);
void AddBook(std::string title, std::string author, int publicationYear, int copiesAvailable);
    ~Library();

    struct Book
{
    std::string title;
    std::string author;
    int publicationYear;
    int copiesAvailable;
    int copiesCheckedOut;
};
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

#endif

//My code is returning errors  that WinMain is undefined and I can't test my code to see what I can improve upon. I am also aware I am sorely lacking in terms of arrays, struct and classes defining values or just having the proper formating. I will continue to review the material and update it as I go.
//Christopher Alexan
//CSIS 135

#include <iostream>
#include <string>

using namespace std;


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


void BorrowBook();


void RemoveBook();


void AddBook();

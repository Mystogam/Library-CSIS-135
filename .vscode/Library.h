//Christopher Alexan
//CSIS 135

#include <iostream>
#include <string>
using namespace std;


long long LibraryMenu();

struct Book
{
    std::string book;
    std::string author;
    int publicationYear;
    int copiesAvailable;
    int copiesCheckedOut;
};

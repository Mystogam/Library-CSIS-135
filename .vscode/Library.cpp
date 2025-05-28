//Christopher Alexan
//CSIS 135

#include <iostream>
#include <string>
#include "Library.h"
using namespace std;

long long LibraryMenu()
{
    int selection;
    bool inputrecieved = false;

    cout << "Welcome to the GCC computer science library!!\n Below you will find a menu that will ask you to decide what to do next.\n" << endl;

    cout << "If checking for book info in library please press 1 to go to book search menu and prompt.\n" << endl;

    cout << "If information is already known and you wish to borrow a book from the library please press 2 to go to the next menu and prompt.\n" << endl;

    cout << "If information is already known and you wish to add a book to the library please press 3 to go to the next menu and prompt.\n" << endl;

    cout << "If information is already known and you wish to remove the book from the library please press 4 to go to the next menu and prompt.\n" << endl;
    
    while(!inputrecieved)
    {
        try
        {
            std::cin >> selection;

            
            if(std::cin.fail())
                throw std::invalid_argument("");//Like in the factorial calculator previously created it throws an exception

                inputrecieved = true;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        

    }

    return 0;
}


void AddBook()
{

}

void RemoveBook()
{

}

void BorrowBook()
{

}

void DisplayBook()
{

}
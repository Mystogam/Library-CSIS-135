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
    
    while(!inputrecieved)
    {

        try
        {
             cout << "Welcome to the GCC computer science library!!\n Below you will find a menu that will ask you to decide what to do next.\n" << endl;

             cout << "If checking for book info in library please press 1 to go to book search menu and prompt.\n" << endl;

             cout << "If information is already known and you wish to borrow a book from the library please press 2 to go to the next menu and prompt.\n" << endl;

             cout << "If information is already known and you wish to add a book to the library please press 3 to go to the next menu and prompt.\n" << endl;
 
             cout << "If information is already known and you wish to remove the book from the library please press 4 to go to the next menu and prompt.\n" << endl;
            
             std::cin >> selection;
            

            if(std::cin.fail())
            {
                throw std::invalid_argument("Incorrect input has occured. Please read menu selection again and ensure a proper input.");//Like in the factorial calculator previously created it throws an exception

            }
            if(selection == 1)
            {
                DisplayBook();
                inputrecieved = true;
            }
            else if(selection == 2)
            {
                inputrecieved = true;
               
            }
            else if(selection == 3)
            {
                
                inputrecieved = true;
            }
            else if (selection == 4)
            {
                
                inputrecieved = true;
            }
        }
        catch(const exception& e)
        {
            cout << "An error has occured." << endl;
            std::cin.clear();
        }
        

    }

    return 0;
}


void AddBook(std::string title, std::string author, int publicationYear, int copiesAvailable)
{
    cout << "Thank you for inputting the third selection and enter the add book to archive section of the library.\n" << endl;
}

void RemoveBook(std::string title)
{
    cout << "Thank you for inputting the fourth selection and entering the remove book section of this library.\n" << endl;
}

void BorrowBook(std::string title)
{
    cout << "Thank you for inputting the second selection and entering the borrowing and free renting section of this library\n" << endl;
}

void DisplayBook()
{
    cout << "Thank you for inputting the second selection and entering the display section of this library archive, where you can see all the info about all books at our library.\n" << endl;

}
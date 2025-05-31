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
                if(selection == 1)
                {
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
            if(std::cin.fail())
            {
                throw std::invalid_argument("Incorrect input has occured. Please read menu selection again and ensure a proper input.");//Like in the factorial calculator previously created it throws an exception

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


void Library::AddBook(std::string title, std::string author, int publicationYear, int copiesAvailable)
{
    cout << "Thank you for inputting the third selection and enter the add book to archive section of the library.\n" << endl;
    cout << "Please enter the name or title of the book you would like to add to the library: " << endl;
    cin >> title;
        if(std::cin.fail())
        {
            cout << "Error has occured in input. Please try again by inputing the title or name of the book you wish to add: " << endl;
            cin >> title;
        }
    cout << "Please enter the name of the author of the book that is being added to the library: " << endl;
    cin >> author;
        if(std::cin.fail())
        {
            cout << "Error has occured in input. Please try again by inputing the name of the author again please: " << endl;
            cin >> author;
        }
    cout << "Please enter the year in which the book being added was published: " << endl;
    cin >> publicationYear;
            if(std::cin.fail())
        {
            cout << "Error has occured in input. Please try again by inputing the year that in which the book was published: " << endl;
            cin >> publicationYear;
        }
    cout << "Please also declare that amount of copies that you would be adding of said book to the Library: " << endl;
    cin >> copiesAvailable;
        if(std::cin.fail())
        {
            cout << "Error has occured in input. Please try again by inputing the amount of books you would like to add: " << endl;
            cin >> copiesAvailable;
        }
    
    return AddBook(title,author,publicationYear,copiesAvailable);
}

void Library::RemoveBook(std::string title)
{
    cout << "Thank you for inputting the fourth selection and entering the remove book section of this library.\n" << endl;
    cout << "Please enter the name or title of book you would like to remove from the Library: " << endl;
    cin >> title;
        if(std::cin.fail())
        {
            cout << "Error has occured in input. Please try again by inputing the title or name of the book you wish to add: " << endl;
            cin >> title;
        }
    return RemoveBook(title);
}

void Library::BorrowBook(std::string title)
{
    cout << "Thank you for inputting the second selection and entering the borrowing and free renting section of this library\n" << endl;
    cout << "Please enter the name or title of the book that you would be borrowing from the Library: " << endl;
    cin >> title;
        if(std::cin.fail())
        {
            cout << "Error has occured in input. Please try again by inputing the title or name of the book you wish to add: " << endl;
            cin >> title;
        }
    return BorrowBook(title);
}
void Library::DisplayBook()
{
    cout << "Thank you for inputting the second selection and entering the display section of this library archive, where you can see all the info about all books at our library.\n" << endl;

}

////My code is returning errors  that WinMain is undefined and I can't test my code to see what I can improve upon. I am aware I am not returning the values properly back into the structures, arrays or classes and that I need to finish doing it. Still trying to understand and review the material.
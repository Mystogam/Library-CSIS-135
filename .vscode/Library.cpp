//Christopher Alexan
//CSIS 135

#include <iostream>
#include <string>
#include "Library.h"
using namespace std;


int main()
{
    Library myLibrary;//Pulls the Library Class from the header file and allows for the .

    int publicationYear; //variables declared for the book structure in
    int copiesAvailable;
    int selection;
    string title;
    string author;
    bool inputrecieved = false;
    
    while(!inputrecieved) //while loop that initiates the user with a menu to select an input and decide what he would like to do with Library.
    {

        try // A try catch statement inside this while statement to prompt user and ensure that it will loop back around and re execute 
        {
             cout << "Welcome to the GCC computer science library!!\n" << endl; //Cout statement that welcomes the user to library.
             cout << "Below you will find a menu that will ask you to decide what to do next.\n" << endl;
             cout << "If checking for book info in library please press 1 to go to book search menu and prompt.\n" << endl;//cout statement that tells user to input the number 1 for the loop to display info on books
             cout << "If information is already known and you wish to borrow a book from the library please press 2 to go to the next menu and prompt.\n" << endl; //cout statement that tells user to input the number 2 to borrow book section of the library
             cout << "If information is already known and you wish to add a book to the library please press 3 to go to the next menu and prompt.\n" << endl; //cout statement that tells user to input the number 3 for the add book section of the library.
             cout << "If information is already known and you wish to remove the book from the library please press 4 to go to the next menu and prompt.\n" << endl;//cout statement that tells the user to input the number 4 for the remove book section of the library.
             std::cin >> selection;//stores number input
             
             //Created 4 cout statements that each display a different message for the menu and have the user input their selection
             //When the user inputs their selection. If valid, will loop into this if else decision statement chain.
             
                if(selection == 1)
                {
                        cout << "Thank you for inputting the first selection and entering the display section of this library archive, where you can see all the info about all books at our library.\n" << endl;//cout statement that displays user with the input of choosing display.

                        myLibrary.DisplayBook();
                        return 0;

                }
                else if(selection == 2)
                {
                    cout << "Thank you for inputting the second selection and entering the borrowing and free renting section of this library\n" << endl;
                    cout << "Please enter the name or title of the book that you would be borrowing from the Library: " << endl;
                    cin >> title; //stores title input prompted in the cout statements above for borrow book function.
                    myLibrary.BorrowBook(title); //Loops the values inputed above in else if decision statement into the borrow book void function.
                    return 0;
                }
                else if(selection == 3)//The add book else if selection that loops back into the Addbook function
                {
                    cout << "Thank you for inputting the third selection and enter the add book to archive section of the library.\n" << endl;
                    cout << "Please enter the name or title of the book you would like to add to the library: " << endl;
                    cin >> title;//stores the string title input from cout statements above in value.
                    cout << "Please enter the name of the author of the book that is being added to the library: " << endl;
                    cin >> author;//stores the string author input from cout statements above in value.
                    cout << "Please enter the year in which the book being added was published: " << endl;
                    cin >> publicationYear;//stores the int value publication year into value prompted from cout statements from above.
                    cout << "Please also declare that amount of copies that you would be adding of said book to the Library: " << endl;
                    cin >> copiesAvailable;//stores the int value copies available into value prompted from cout statements from above.
                    myLibrary.AddBook(title, author, publicationYear, copiesAvailable); //Loops the the values inputed above in decision statement back into addbook void function.
                    return 0;
                }
                else if (selection == 4)//The remove book section of the else if decision statement that loops back into the remove book void function.
                {
                //loop until quit selected
                    cout << "Thank you for inputting the fourth selection and entering the remove book section of this library.\n" << endl;
                    cout << "Please enter the name or title of book you would like to remove from the Library: " << endl;
                    cin >> title;
                    myLibrary.RemoveBook(title); //Loops the inputed title string back into the Remove book void function.
                    return 0;
                }
            if(std::cin.fail())
            {
                throw std::invalid_argument("Incorrect input has occured. Please read menu selection again and ensure a proper input.");//Throws away any exceptions
                
            }
        }
        catch(const exception& e)//catch part of the statement that collects the errors
        {
            cout << "An error has occured." << endl; //Displays error message for misinput.
            std::cin.clear(); //clears the error flags
            std::cin.ignore(10000, '\n'); //discards the invalid input of numbers.
            
        }
        

    }

    return 0;
}


void Library::AddBook(std::string title, std::string author, int publicationYear, int copiesAvailable)//void function for the addition of more books to library vector
{
    _books.push_back(std::make_unique<Book>(title, author, publicationYear, copiesAvailable)); //sends the inputted variables for the new book back into the vector

}

void Library::RemoveBook(std::string title) //function for  removing a book variable from 
{ 

    for(auto it = _books.begin(); it != _books.end(); ++it)//for loop that checks vector, really hoping this works.
    {
        if((*it)->title == title)//if loop that will destroy book and attatched values from library.
        {
            cout << "Book " << title << " has been succesfully removed from Library." << endl;
            _books.erase(it);//erases the book and all values attatched to book from vector
        }
    }

}

void Library::BorrowBook(std::string title)//void function made for the borrowing of books from library
{
    for(auto& Book : _books)//for loop that checks the vector for the title of book
    {
        if(Book->title == title)//if loop that changes the variables copies available and copies checked out in vector.
        {
            if(Book->copiesAvailable > 0)//runs a check for copies available then loops to else statement in case of failure
            {
            Book->copiesAvailable--; //subtracts a value of 1 from copiesAvailable variable attatched to the specific book being called
            Book->copiesCheckedOut++; //adds a value of 1 to the copiesCheckedOut variable attatched to the specific book being called
            cout << "The requested book to check out: " << Book->title << " has been succesfully checked out." << endl;
            return;

            }
            else //only runs if there are no titles currently available to be checked out
            {
                cout << "There are currently no available copies of " << Book->title << " to check out at the moment." << endl;
            }

        }
    }

}
void Library::DisplayBook()//function meant to display entire library that is stored inside the vector.
{
    if(_books.empty())
    {
        cout << "Error has occured! It seems like the library that is to be displayed is currently empty, please return at another time.\n" << endl;//display message for empty library error
        return;
    }
    else
    {
        cout << "Below are the selection of all the books currently available in our library." << endl;

        for(const auto& Book:_books)// For loop that iterates through the library vector and displays each book's details.
        {
        cout << "Title: " << Book->title << endl;
        cout << "Author: " << Book->author << endl;
        cout << "Publication Year: " << Book->publicationYear << endl;
        cout << "Current Available Copies: " << Book->copiesAvailable << endl;
        cout << "Current amount of copies checked out: " << Book->copiesCheckedOut << endl;
        cout << "\n" << endl;
        }
        return;
    }

}

 
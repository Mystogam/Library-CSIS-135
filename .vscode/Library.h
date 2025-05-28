//Christopher Alexan
//CSIS 135

#include <iostream>
#include <string>
#pragma once
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
#define LibraryMenu

void DisplayBook();
#define DisplayBook

void BorrowBook();
#define BorrowBook

void RemoveBook();
#define RemoveBook

void AddBook();
#define AddBook
// AddingCppGitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> // Input and Output library
#include <string> // needed to create strings of text
using namespace std; // needed to limit repeated code std


int main()
{
   int a;
   int b;
   

   cout << "Please enter your first number: ";
   cin >> a;
   cout << "Please enter your second number: ";
   cin >> b;
   cout << "You have entered " << a << " and " << b << " to be added.";
   
   int c = a + b;// code needed to be added after the values of the variables were added through user input
   cout << "\nYour total is " << c << ".\n\n\n";

   // create your own number variables with out the input syntax
   int numberA = 10;
   int numberB = 5;
   int numberC = numberA + numberB;

   cout << "The first number is set to: " << numberA;
   cout << "\nThe second number is set to: " << numberB;
   cout << "\nAdd the two number together!";
   cout << "\nThe numbers equal: " << numberC <<"\n";


   system("pause");
    return 0;
}




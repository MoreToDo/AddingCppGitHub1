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
   int c = a + b;

   cout << "Please enter your first number: ";
   cin >> a;
   cout << "Please enter your second number: ";
   cin >> b;
   cout << "You have entered " << a << " and " << b << " to be added.";
   cout << "\nYour total is " << c << ".\n";

   system("pause");
    return 0;
}

